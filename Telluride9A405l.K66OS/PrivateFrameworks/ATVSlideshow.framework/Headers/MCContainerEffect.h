/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCContainer.h"
#import "MCActionSupport.h"

@class NSArray, NSSet, NSMutableSet, NSDictionary, NSMutableDictionary, NSString;

@interface MCContainerEffect : MCContainer <MCActionSupport> {
	NSMutableSet *mSlides;	// 28 = 0x1c
	NSArray *mCachedOrderedSlides;	// 32 = 0x20
	NSMutableSet *mTexts;	// 36 = 0x24
	NSArray *mCachedOrderedTexts;	// 40 = 0x28
	NSMutableDictionary *mActions;	// 44 = 0x2c
	NSString *mEffectID;	// 48 = 0x30
	NSMutableDictionary *mEffectAttributes;	// 52 = 0x34
	BOOL mIsLive;	// 56 = 0x38
}
@property(readonly, assign) NSDictionary *actions;	// G=0x335c9ac1; 
@property(readonly, assign) unsigned countOfActions;	// G=0x335c9c15; 
@property(readonly, assign) unsigned countOfSlides;	// G=0x335c6215; 
@property(readonly, assign) unsigned countOfTexts;	// G=0x335c7d51; 
@property(copy) NSDictionary *effectAttributes;	// G=0x335c9519; S=0x335c95e1; 
@property(copy) NSString *effectID;	// G=0x335c96ed; S=0x335c9701; @synthesize=mEffectID
@property(assign) BOOL isLive;	// G=0x335c9725; S=0x335c9735; @synthesize=mIsLive
@property(readonly, assign) unsigned nextAvailableSlideIndex;	// G=0x335c62d1; 
@property(readonly, assign) unsigned nextAvailableTextIndex;	// G=0x335c7e0d; 
@property(readonly, assign) NSArray *orderedSlides;	// G=0x335c6049; 
@property(readonly, assign) NSArray *orderedTexts;	// G=0x335c7b85; 
@property(readonly, assign) NSSet *slides;	// G=0x335c5f1d; 
@property(readonly, assign) NSSet *texts;	// G=0x335c7a59; 
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x335c52c9
- (id)init;	// 0x335c5385
- (void)initActionsWithImprints:(id)imprints;	// 0x335c9745
- (id)initFromScratchWithMontage:(id)montage;	// 0x335c5439
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x335c54b5
- (id)actionForKey:(id)key;	// 0x335c9d11
// declared property getter: - (id)actions;	// 0x335c9ac1
- (id)addSlide;	// 0x335c6691
- (id)addSlideForAsset:(id)asset;	// 0x335c6c21
- (id)addSlideForContainer:(id)container;	// 0x335c70fd
- (id)addSlides:(int)slides;	// 0x335c66bd
- (id)addSlidesForAssets:(id)assets;	// 0x335c6c85
- (id)addTextForAsset:(id)asset andKey:(id)key;	// 0x335c8265
- (id)addTextForAttributedString:(id)attributedString;	// 0x335c81cd
- (id)addTextsForAssets:(id)assets andKey:(id)key;	// 0x335c82d1
- (id)addTextsForAttributedStrings:(id)attributedStrings;	// 0x335c8231
// declared property getter: - (unsigned)countOfActions;	// 0x335c9c15
// declared property getter: - (unsigned)countOfSlides;	// 0x335c6215
// declared property getter: - (unsigned)countOfTexts;	// 0x335c7d51
- (void)demolish;	// 0x335c5815
- (void)demolishActions;	// 0x335c9841
- (id)effectAttributeForKey:(id)key;	// 0x335c92b9
// declared property getter: - (id)effectAttributes;	// 0x335c9519
// declared property getter: - (id)effectID;	// 0x335c96ed
- (id)imprint;	// 0x335c5bb9
- (id)imprintsForActions;	// 0x335c99cd
- (id)insertSlideAtIndex:(int)index;	// 0x335c6941
- (id)insertSlideForAsset:(id)asset atIndex:(unsigned)index;	// 0x335c6cb9
- (id)insertSlideForContainer:(id)container atIndex:(unsigned)index;	// 0x335c7131
- (id)insertSlidesForAssets:(id)assets atIndex:(unsigned)index;	// 0x335c6d09
- (id)insertTextForAsset:(id)asset andKey:(id)key atIndex:(unsigned)index;	// 0x335c87a9
- (id)insertTextForAttributedString:(id)attributedString atIndex:(unsigned)index;	// 0x335c830d
- (id)insertTextsForAssets:(id)assets andKey:(id)key atIndex:(unsigned)index;	// 0x335c8801
- (id)insertTextsForAttributedStrings:(id)attributedStrings atIndex:(unsigned)index;	// 0x335c835d
// declared property getter: - (BOOL)isLive;	// 0x335c9725
- (void)moveSlidesAtIndices:(id)indices toIndex:(unsigned)index;	// 0x335c77c1
- (void)moveTextsAtIndices:(id)indices toIndex:(unsigned)index;	// 0x335c9021
// declared property getter: - (unsigned)nextAvailableSlideIndex;	// 0x335c62d1
// declared property getter: - (unsigned)nextAvailableTextIndex;	// 0x335c7e0d
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x335c5ea9
// declared property getter: - (id)orderedSlides;	// 0x335c6049
// declared property getter: - (id)orderedTexts;	// 0x335c7b85
- (void)removeActionForKey:(id)key;	// 0x335c9f01
- (void)removeAllSlides;	// 0x335c776d
- (void)removeAllTexts;	// 0x335c8fcd
- (void)removeSlidesAtIndices:(id)indices;	// 0x335c7465
- (void)removeTextsAtIndices:(id)indices;	// 0x335c8c75
- (void)setAction:(id)action forKey:(id)key;	// 0x335c9e41
- (void)setEffectAttribute:(id)attribute forKey:(id)key;	// 0x335c93a5
// declared property setter: - (void)setEffectAttributes:(id)attributes;	// 0x335c95e1
// declared property setter: - (void)setEffectID:(id)anId;	// 0x335c9701
// declared property setter: - (void)setIsLive:(BOOL)live;	// 0x335c9735
- (id)slideAtIndex:(unsigned)index;	// 0x335c64c1
// declared property getter: - (id)slides;	// 0x335c5f1d
- (id)textAtIndex:(unsigned)index;	// 0x335c7ffd
// declared property getter: - (id)texts;	// 0x335c7a59
@end
