function testresults = finaltestoutput(yourdata,testnums,outputs)

% This function tests the user-specified output variables against those
% variables from the test data set (obtained from Gaussian09). It only
% tests numerical variables and the basis structure array, but not other
% non-numeric variables (e.g. molecule name, scf method, etc...).
%
%  OUTPUT: 
%    out  - Specified output variable (e.g. basis, S, T, etc...)
%  INPUT:
%    test - An element of a structure array that contains the input
%           parameters for a particular test case
%    var  - The variable or object that the student wants to compare
%           to the test case data in testcases_v05
%  

%   testcase
%   allpass
%   testdata (structure array)
%     VAR
%     passfail (pass or fail)
%     maxerror
%     yourout
%     testout

load('testcases_v05');

nTestCases = numel(testnums);
nOutputs = numel(outputs);

testresults = cell(1,nTestCases);

result = struct('testcase',num2cell(testnums),'allpass',[],'testdata',...
  struct('output',outputs,'passfail',[],'maxerror',[],...
  'yourout',[],'testout',[]));

% % compare chosen values with test set

for iTest = 1:nTestCases
  testnum = testnums(iTest);
  test = testcases(testnum);
  data = yourdata(iTest);
  result(iTest).testcase = testnum;
  result(iTest).allpass = 'yes';
  
  for iOut = 1:nOutputs
    outputname = outputs{iOut};
    testval = test.(genvarname(outputname));
    yourval = data.(genvarname(outputname));
    testdat_.output = outputname;
    testdat_.testout = testval;
    testdat_.yourout = yourval;
    
    % choose comparison method based on variable type
    if strcmp(outputname,'basis')
      testdat_.maxerror = 'Not appiclable for basis test';
      for iBF = 1:numel(test.basis)
        data.basis(iBF).N = round(data.basis(iBF).N,14);
        test.basis(iBF).N = round(test.basis(iBF).N,14);
      end
      ok = isequal(data.basis,test.basis);
    else
      err = max(abs(testval(:) - yourval(:)));
      ok  =  err < 1e-7;
      testdat_.maxerror = err;
    end
    if ok
      testdat_.passfail = 'pass <3';
    else
      testdat_.passfail = 'FAIL </3';
      result(iTest).allpass = 'NO';
    end
    
    result(iTest).testdata(iOut) = testdat_;
    
  end
  testresults{iTest} = result(iTest);
end
% testcases = 0;
return








