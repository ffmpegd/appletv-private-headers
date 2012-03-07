/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MUMathExpressionBase.h"
#import "ATVSlideshow-Structs.h"


@interface MUMathExpressionFloatBased : MUMathExpressionBase {
	FunctionInterpreter<float> *mInterpreter;	// 12 = 0xc
}
+ (float)evaluateString:(id)string error:(id *)error;	// 0x32fb6b61
+ (float)invalidResult;	// 0x32fb74f5
- (id)init;	// 0x32fb6e55
- (id)initWithString:(id)string error:(id *)error;	// 0x32fb6e69
- (void)cleanup;	// 0x32fb71a9
- (void)dealloc;	// 0x32fb7129
- (float)evaluate;	// 0x32fb73f5
- (void)finalize;	// 0x32fb7169
- (BOOL)isValueIllegal:(float)illegal;	// 0x32fb7501
- (void)resetAllVariables;	// 0x32fb73ad
- (void)setValue:(float)value forVariable:(id)variable;	// 0x32fb71c9
- (void)setVariableValues:(id)values;	// 0x32fb7295
- (float)valueForVariable:(id)variable;	// 0x32fb722d
@end

