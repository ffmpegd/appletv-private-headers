/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import "AccessibilityUtilities-Structs.h"
#import </libobjc.A.h>

@class NSString, NSMutableOrderedSet, NSLinguisticTagger, NSMutableArray, NSArray;

@interface AXLanguageTaggedContent : NSObject {
	NSArray *_currentDialects;	// 4 = 0x4
	NSRange _currentChunk;	// 8 = 0x8
	BOOL _predictedByTagger;	// 16 = 0x10
	BOOL _tagged;	// 17 = 0x11
	NSMutableArray *_tags;	// 20 = 0x14
	NSLinguisticTagger *_linguisticTagger;	// 24 = 0x18
	NSMutableOrderedSet *_unpredictedAmbiguousLangMaps;	// 28 = 0x1c
	NSString *_userPreferredLangID;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) NSString *content;	// G=0x2fe4a0d9; 
@property(retain, nonatomic) NSArray *currentDialects;	// G=0x2fe4bba5; S=0x2fe4bbb5; @synthesize=_currentDialects
@property(retain, nonatomic) NSLinguisticTagger *linguisticTagger;	// G=0x2fe4bb41; S=0x2fe4bb51; @synthesize=_linguisticTagger
@property(assign, nonatomic, getter=isTagged) BOOL tagged;	// G=0x2fe4bb21; S=0x2fe4bb31; @synthesize=_tagged
@property(retain, nonatomic) NSMutableArray *tags;	// G=0x2fe4bb01; S=0x2fe4bb11; @synthesize=_tags
@property(retain, nonatomic) NSMutableOrderedSet *unpredictedAmbiguousLangMaps;	// G=0x2fe4bb61; S=0x2fe4bb71; @synthesize=_unpredictedAmbiguousLangMaps
@property(copy, nonatomic) NSString *userPreferredLangID;	// G=0x2fe4bb81; S=0x2fe4bb95; @synthesize=_userPreferredLangID
- (id)initWithContent:(id)content;	// 0x2fe49e51
- (void)_addTag;	// 0x2fe4b5a1
- (void)_manuallyProcessContentWithRange:(NSRange)range;	// 0x2fe4b27d
- (id)ambiguousLangMaps;	// 0x2fe4acb1
// declared property getter: - (id)content;	// 0x2fe4a0d9
// declared property getter: - (id)currentDialects;	// 0x2fe4bba5
- (void)dealloc;	// 0x2fe49f41
- (id)description;	// 0x2fe49fd9
- (void)enumeratePredictedTags:(id)tags;	// 0x2fe4a1dd
- (void)enumerateUnpredictedTags:(id)tags;	// 0x2fe4a101
- (BOOL)hasOnlyNonWesternLangMaps;	// 0x2fe4b071
- (BOOL)hasOnlyWesternLangMaps;	// 0x2fe4ae65
// declared property getter: - (BOOL)isTagged;	// 0x2fe4bb21
- (BOOL)langMapIsSignificant:(id)significant;	// 0x2fe4a9ad
// declared property getter: - (id)linguisticTagger;	// 0x2fe4bb41
- (id)primaryAmbiguousDialect;	// 0x2fe4b80d
- (id)primaryUnambiguousDialect;	// 0x2fe4b845
// declared property setter: - (void)setCurrentDialects:(id)dialects;	// 0x2fe4bbb5
// declared property setter: - (void)setLinguisticTagger:(id)tagger;	// 0x2fe4bb51
// declared property setter: - (void)setTagged:(BOOL)tagged;	// 0x2fe4bb31
// declared property setter: - (void)setTags:(id)tags;	// 0x2fe4bb11
// declared property setter: - (void)setUnpredictedAmbiguousLangMaps:(id)maps;	// 0x2fe4bb71
// declared property setter: - (void)setUserPreferredLangID:(id)anId;	// 0x2fe4bb95
- (id)significantAmbiguousLangMaps;	// 0x2fe4a9b1
- (id)significantAmbiguousLangMapsForUserKeyboards;	// 0x2fe4a9c1
- (void)tagContent;	// 0x2fe4a2b9
// declared property getter: - (id)tags;	// 0x2fe4bb01
- (id)unambiguousLangMaps;	// 0x2fe4aafd
// declared property getter: - (id)unpredictedAmbiguousLangMaps;	// 0x2fe4bb61
- (void)updateTagsForLocalePrefChange;	// 0x2fe4b87d
// declared property getter: - (id)userPreferredLangID;	// 0x2fe4bb81
@end
