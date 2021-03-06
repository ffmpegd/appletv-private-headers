/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import </libobjc.A.h>
#import "EDFormulaBuilding.h"


@interface EDFormula : NSObject <EDFormulaBuilding> {
	CFDataRef mPackedData;	// 4 = 0x4
}
@property(assign, getter=isCleaned) bool cleaned;	// G=0x317c680d; S=0x317c3fe5; converted property
@property(retain) id originalFormulaString;	// G=0x3186f9b1; S=0x3185cb11; converted property
@property(retain) id warningParameter;	// G=0x318d2465; S=0x31887e89; converted property
+ (id)formula;	// 0x317b0fb5
+ (id)messageForWarning:(int)warning;	// 0x317c425d
- (id)init;	// 0x317b0ffd
- (id)initWithFormula:(id)formula;	// 0x317c44e5
- (BOOL)addArrayWithCol:(int)col andRow:(int)row;	// 0x3189e31d
- (char *)addToken:(int)token extendedDataLength:(unsigned)length;	// 0x3185c62d
- (bool)addToken:(int)token extendedDataLength:(unsigned)length extendedDataCount:(unsigned)count;	// 0x317b2d35
- (char *)addToken:(int)token extendedDataLength:(unsigned)length numArgs:(int)args;	// 0x3185d1f1
- (void)archiveByAppendingToMutableData:(CFDataRef)mutableData;	// 0x318d2ce9
- (BOOL)convertLastRefsToArea;	// 0x318d29b1
- (BOOL)convertRefs:(unsigned)refs toTypes:(int *)types;	// 0x318d2aad
- (BOOL)convertToIntersect:(unsigned)intersect;	// 0x318d29ad
- (BOOL)convertToList:(unsigned)list;	// 0x318d26ad
- (BOOL)convertToList:(unsigned)list withFinalParen:(BOOL)finalParen;	// 0x318d26c5
- (bool)copyTokenAtIndex:(unsigned)index fromFormula:(id)formula;	// 0x3185c759
- (bool)copyTokenFromXlPtg:(XlPtg *)xlPtg;	// 0x317b2c41
- (unsigned)countExtendedDataForTokenAtIndex:(unsigned)index;	// 0x318d21a1
- (void)dealloc;	// 0x317c453d
- (char *)extendedDataForTokenAtIndex:(unsigned)index extendedDataIndex:(unsigned)index2 length:(unsigned *)length;	// 0x3189e3c9
- (unsigned)firstTokenIndexForArgAtIndex:(unsigned)index;	// 0x318d24bd
- (BOOL)insertExternalName:(unsigned)name withLink:(unsigned)link atIndex:(unsigned)index;	// 0x318d260d
- (bool)isBaseFormula;	// 0x318d24b9
// converted property getter: - (bool)isCleaned;	// 0x317c680d
- (bool)isCleanedWithEvaluationStack;	// 0x318069a9
- (bool)isContainsRelativeReferences;	// 0x317c44b1
- (bool)isSharedFormula;	// 0x318d24b5
- (bool)isSupportedFormula;	// 0x317c67dd
- (char *)lastExtendedDataForTokenAtIndex:(unsigned)index length:(unsigned *)length;	// 0x317c3b99
- (id)lastTokenRefOrArea3dLinkRefIsValid:(BOOL *)valid withEDLinks:(id)edlinks;	// 0x318d2bb1
- (void)markLastTokenAsDuration;	// 0x318d2c85
- (void)markLastTokenAsSpanningRefVertically:(BOOL)vertically withMin:(unsigned short)min andMax:(unsigned short)max;	// 0x318d2c89
// converted property getter: - (id)originalFormulaString;	// 0x3186f9b1
- (void)populateXlPtg:(XlPtg *)ptg index:(unsigned)index;	// 0x318d2205
- (void)removeAllTokens;	// 0x317fba0d
- (bool)removeTokenAtIndex:(unsigned)index;	// 0x31898935
- (bool)replaceTokenAtIndex:(unsigned)index withFormula:(id)formula formulaTokenIndex:(unsigned)index3;	// 0x31806869
- (void)replaceTokenTypeAtIndex:(unsigned)index withType:(int)type;	// 0x318d2181
- (id)saveArgs:(unsigned)args andDelete:(BOOL)aDelete;	// 0x318d2519
// converted property setter: - (void)setCleaned:(bool)cleaned;	// 0x317c3fe5
- (char *)setExtendedDataAtIndex:(unsigned)index extendedDataIndex:(unsigned)index2 length:(unsigned)length;	// 0x317b2f35
- (char *)setExtendedDataForLastTokenAtIndex:(unsigned)index length:(unsigned)length;	// 0x3189e38d
// converted property setter: - (void)setOriginalFormulaString:(id)string;	// 0x3185cb11
- (void)setWarning:(int)warning;	// 0x317c7c21
// converted property setter: - (void)setWarningParameter:(id)parameter;	// 0x31887e89
- (void)setupExtendedDataForTokenAtIndex:(unsigned)index extendedDataLength:(unsigned)length extendedDataCount:(unsigned)count;	// 0x317b2e61
- (bool)setupTokensWithTokensCount:(unsigned)tokensCount tokensWithDataCount:(unsigned)dataCount extendedDataLength:(unsigned)length extendedDataCount:(unsigned)count;	// 0x317b104d
- (BOOL)shrinkSpanningRefAtArgIndex:(unsigned)argIndex;	// 0x318d2c8d
- (EDToken *)tokenAtIndex:(unsigned)index;	// 0x317b30d5
- (unsigned)tokenCount;	// 0x317c3855
- (int)tokenTypeAtIndex:(unsigned)index;	// 0x317c3ad5
- (void)unarchiveFromData:(CFDataRef)data offset:(unsigned *)offset;	// 0x318d2c91
- (void)updateCleanedWithEvaluationStack:(bool)evaluationStack;	// 0x318069dd
- (void)updateContainsRelativeReferences:(bool)references;	// 0x317c3e29
- (id)warning;	// 0x317c41f9
// converted property getter: - (id)warningParameter;	// 0x318d2465
- (int)warningType;	// 0x317c4231
- (ChVector<XlPtg *> *)xlPtgs;	// 0x318d2295
@end

