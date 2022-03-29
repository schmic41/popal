% This is the script that students will run to test their output against a
% set of test data. The file 'testinputs' loads a structure array called
% parameters that contains the input needed to run their functions but does
% not contain any of the output from those functions.
%
% The user must define an array of test case numbers and a cell array of
% strings for each output object they want to test against the data set.
% Then the function gettestoutput outputs a cell array in which each cell
% rcontains a structure array with the test results for one test case

clear
clc

tic
load('testcases_v05'); % contains parameters structure array

testnums = [17];
outputs = {'E0','P','Vxc','Exc'};

nTests = numel(testnums);
tests = testcases(testnums);
nOutputs = numel(outputs);

% use your function outputs to use as test function inputs
for iTest = 1:nTests
  myout(iTest) = finalgettestoutput(tests(iTest)); % output for testcase
end

% compare outputs in myout to testcases in 'testcases_v05.mat'
testresults = finaltestoutput(myout,testnums,outputs);

% alert the user if any parameter test failed for each test case
for iTest = 1:nTests
  testnum = testresults{iTest}.testcase;
  passorfail = testresults{iTest}.allpass;
  if strcmp('yes',passorfail)
    fprintf(' Testcase %i: All tests passed <3\n',testnum);
  else
    fprintf(' Testcase %i: One or more tests failed :(\n',testnum);
  end
end

% NOTE: I will modify this so the results are easier to access and print!!
  

for iTest = 1:nTests
  testnum = testresults{iTest}.testcase;
  failures = zeros(nOutputs);
  for iOutput = 1:nOutputs
    outtype = testresults{iTest}.testdata(iOutput).output;
    maxerror = testresults{iTest}.testdata(iOutput).maxerror;
    yourvalue = testresults{iTest}.testdata(iOutput).yourout;
    testvalue = testresults{iTest}.testdata(iOutput).testout;
    msg = testresults{iTest}.testdata(iOutput).passfail;
    if strcmp('FAIL </3',msg)
      failures(iOutput) = 1;
      fprintf('\nTestcase: %d\nFailed: %s\nMax error: %d\n\n',testnum,outtype,maxerror);
      disp('Your output:'), disp(yourvalue);
      disp('Test output:'), disp(testvalue);
    end
  end
end
toc


