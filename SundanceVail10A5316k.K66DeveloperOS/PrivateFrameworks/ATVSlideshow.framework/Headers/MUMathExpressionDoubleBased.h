/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MUMathExpressionBase.h"
#import "ATVSlideshow-Structs.h"


@interface MUMathExpressionDoubleBased : MUMathExpressionBase {
	FunctionInterpreter<double> *mInterpreter;	// 12 = 0xc
}
+ (double)evaluateString:(id)string error:(id *)error;	// 0x3655a489
+ (double)invalidResult;	// 0x3655b041
- (id)init;	// 0x3655a751
- (id)initWithString:(id)string error:(id *)error;	// 0x3655a765
- (void)_resetVariableIndicies;	// 0x3655aa09
- (void)cleanup;	// 0x3655a9ed
- (void)dealloc;	// 0x3655a96d
- (double)evaluate;	// 0x3655aec1
- (void)finalize;	// 0x3655a9ad
- (BOOL)isConstant;	// 0x3655b025
- (BOOL)isValueIllegal:(double)illegal;	// 0x3655b059
- (void)replaceVariable:(id)variable withValue:(double)value;	// 0x3655ad61
- (void)resetAllVariables;	// 0x3655ad01
- (void)setValue:(double)value forVariable:(id)variable;	// 0x3655aae1
- (void)setVariableValues:(id)values;	// 0x3655abc9
- (id)stringValue;	// 0x3655afd1
- (double)valueForVariable:(id)variable;	// 0x3655ab51
@end
