function  out = getmyout(test)

% This function gets output from student implementations of the final scf
% function mocalc so that thet output can be compared to the test set data
% in finatesscript
%
%  INPUT:
%    test - All test data (input and output) for a particular test case
%
%  OUTPUT: 
%    out  - The final output of student scf function mocalc
 
atoms = test.atoms;
xyz = test.xyz_A; % angstrom
totalcharge = test.charge;
settings = test.options;

out = mocalc(atoms,xyz,totalcharge,settings);
out.testcase = test.testcase;

return