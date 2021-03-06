/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import "TIWordSearchOperation.h"

@class NSArray, TIWordSearch, NSString;

@interface TIWordSearchOperationGetCandidates : TIWordSearchOperation {
	NSString *_inputString;	// 12 = 0xc
	NSArray *_results;	// 16 = 0x10
	id _target;	// 20 = 0x14
	NSArray *_geometryModelData;	// 24 = 0x18
	SEL _action;	// 28 = 0x1c
	BOOL _withPrediction;	// 32 = 0x20
	TIWordSearch *_wordSearch;	// 36 = 0x24
}
@property(readonly, assign) SEL action;	// G=0x377a81e5; @synthesize=_action
@property(readonly, assign) NSArray *geometryModelData;	// G=0x377a81d1; @synthesize=_geometryModelData
@property(readonly, assign) NSString *inputString;	// G=0x377a8185; @synthesize=_inputString
@property(retain) NSArray *results;	// G=0x377a8199; S=0x377a81ad; @synthesize=_results
@property(readonly, assign) id target;	// G=0x377a81bd; @synthesize=_target
@property(readonly, assign) BOOL withPrediction;	// G=0x377a81f9; @synthesize=_withPrediction
@property(retain) TIWordSearch *wordSearch;	// G=0x377a8211; S=0x377a8225; @synthesize=_wordSearch
- (id)initWithWordSearch:(id)wordSearch inputString:(id)string withPrediction:(BOOL)prediction target:(id)target action:(SEL)action geometryModelData:(id)data;	// 0x377a7e5d
// declared property getter: - (SEL)action;	// 0x377a81e5
- (void)checkForCachedResults;	// 0x377a7fe5
- (void)completeSearchOnMainThreadWithResults:(id)results;	// 0x377a811d
- (void)dealloc;	// 0x377a7f45
// declared property getter: - (id)geometryModelData;	// 0x377a81d1
// declared property getter: - (id)inputString;	// 0x377a8185
- (void)perform;	// 0x377a8029
// declared property getter: - (id)results;	// 0x377a8199
// declared property setter: - (void)setResults:(id)results;	// 0x377a81ad
// declared property setter: - (void)setWordSearch:(id)search;	// 0x377a8225
// declared property getter: - (id)target;	// 0x377a81bd
// declared property getter: - (BOOL)withPrediction;	// 0x377a81f9
// declared property getter: - (id)wordSearch;	// 0x377a8211
@end

