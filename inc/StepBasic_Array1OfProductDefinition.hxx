// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_Array1OfProductDefinition_HeaderFile
#define _StepBasic_Array1OfProductDefinition_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Integer.hxx>
#include <Standard_Address.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_StepBasic_ProductDefinition.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepBasic_ProductDefinition;



class StepBasic_Array1OfProductDefinition 
{
public:

  DEFINE_STANDARD_ALLOC

  
    StepBasic_Array1OfProductDefinition(const Standard_Integer Low, const Standard_Integer Up);
  
    StepBasic_Array1OfProductDefinition(const Handle(StepBasic_ProductDefinition)& Item, const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT   void Init (const Handle(StepBasic_ProductDefinition)& V) ;
  
      void Destroy() ;
~StepBasic_Array1OfProductDefinition()
{
  Destroy();
}
  
      Standard_Boolean IsAllocated()  const;
  
  Standard_EXPORT  const  StepBasic_Array1OfProductDefinition& Assign (const StepBasic_Array1OfProductDefinition& Other) ;
 const  StepBasic_Array1OfProductDefinition& operator = (const StepBasic_Array1OfProductDefinition& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(StepBasic_ProductDefinition)& Value) ;
  
     const  Handle(StepBasic_ProductDefinition)& Value (const Standard_Integer Index)  const;
   const  Handle(StepBasic_ProductDefinition)& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
      Handle(StepBasic_ProductDefinition)& ChangeValue (const Standard_Integer Index) ;
    Handle(StepBasic_ProductDefinition)& operator () (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}




protected:





private:

  
  Standard_EXPORT StepBasic_Array1OfProductDefinition(const StepBasic_Array1OfProductDefinition& AnArray);


  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  Standard_Address myStart;
  Standard_Boolean isAllocated;


};

#define Array1Item Handle(StepBasic_ProductDefinition)
#define Array1Item_hxx <StepBasic_ProductDefinition.hxx>
#define TCollection_Array1 StepBasic_Array1OfProductDefinition
#define TCollection_Array1_hxx <StepBasic_Array1OfProductDefinition.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx




#endif // _StepBasic_Array1OfProductDefinition_HeaderFile
