#pragma once
#include "pch.h"
#include "BankAccount.h"


using namespace System;

ref class BankAccount
{
public:
	    BankAccount(String^ holder);
		void Credit(double amount);
		void Debit(double amount);
		double GetBalance();
private:
	String^ accountHolder;
	double balance;
};