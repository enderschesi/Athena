#pragma once

void* ProcessEventHook(UObject* A, UObject* B, void* C) {
	std::string ObjName = A->GetFullName();
	std::string FuncName = B->GetFullName();

	return ProcessEvent(A, B, C);
}