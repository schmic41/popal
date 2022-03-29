clear;
clc;
clf;

load('testcases_v05');
tic
testnum = 14;
iMO = 1;
level = 0.09;

test = testcases(testnum);

test.molecule;

atoms = test.atoms;
xyz = test.xyz_A;
totalcharge = test.charge;
settings=test.options;

test_mocalc = mocalc(atoms,xyz,totalcharge,settings);

moplot(atoms,xyz,test_mocalc,iMO,level);
toc