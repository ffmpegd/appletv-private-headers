/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCActionSupport.h"
#import "MCContainer.h"

@class NSArray, NSSet, NSMutableDictionary, NSDictionary, NSMutableArray, NSString;

@interface MCContainerEffect : MCContainer <MCActionSupport> {
	NSMutableArray *mSlides;	// 28 = 0x1c
	NSMutableArray *mTexts;	// 32 = 0x20
	NSMutableDictionary *mActions;	// 36 = 0x24
	NSString *mEffectID;	// 40 = 0x28
	NSMutableDictionary *mEffectAttributes;	// 44 = 0x2c
	BOOL mIsLive;	// 48 = 0x30
}
@property(readonly, assign) NSDictionary *actions;	// G=0x30adfbb1; 
@property(readonly, assign, nonatomic) unsigned countOfActions;	// G=0x30adfd01; 
@property(readonly, assign, nonatomic) unsigned countOfSlides;	// G=0x30adbb85; 
@property(readonly, assign, nonatomic) unsigned countOfTexts;	// G=0x30addb41; 
@property(copy) NSDictionary *effectAttributes;	// G=0x30adf58d; S=0x30adf655; 
@property(copy) NSString *effectID;	// G=0x30adf761; S=0x30adf775; @synthesize=mEffectID
@property(assign, nonatomic) BOOL isLive;	// G=0x30adf799; S=0x30adf7a9; @synthesize=mIsLive
@property(readonly, assign, nonatomic) unsigned nextAvailableSlideIndex;	// G=0x30adbc4d; 
@property(readonly, assign, nonatomic) unsigned nextAvailableTextIndex;	// G=0x30addc09; 
@property(readonly, assign) NSArray *orderedSlides;	// G=0x30adb9b9; 
@property(readonly, assign) NSArray *orderedTexts;	// G=0x30add98d; 
@property(readonly, assign) NSSet *slides;	// G=0x30adb885; 
@property(readonly, assign) NSSet *texts;	// G=0x30add859; 
+ (id)keyPathsForValuesAffectingValueForKey:(id)key;	// 0x30adac11
- (void)initActionsWithImprints:(id)imprints;	// 0x30adf7b9
- (id)initFromScratchWithMontage:(id)montage;	// 0x30adaccd
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x30adad49
- (id)actionForKey:(id)key;	// 0x30adfe05
// declared property getter: - (id)actions;	// 0x30adfbb1
- (id)addSlide;	// 0x30adc03d
- (id)addSlideForAsset:(id)asset;	// 0x30adc779
- (id)addSlideForContainer:(id)container;	// 0x30adcd85
- (id)addSlides:(int)slides;	// 0x30adc069
- (id)addSlidesForAssets:(id)assets;	// 0x30adc809
- (id)addTextForAsset:(id)asset andKey:(id)key;	// 0x30ade091
- (id)addTextForAttributedString:(id)attributedString;	// 0x30addff9
- (id)addTextsForAssets:(id)assets andKey:(id)key;	// 0x30ade0fd
- (id)addTextsForAttributedStrings:(id)attributedStrings;	// 0x30ade05d
// declared property getter: - (unsigned)countOfActions;	// 0x30adfd01
// declared property getter: - (unsigned)countOfSlides;	// 0x30adbb85
// declared property getter: - (unsigned)countOfTexts;	// 0x30addb41
- (void)demolish;	// 0x30adb141
- (void)demolishActions;	// 0x30adf8f5
- (id)effectAttributeForKey:(id)key;	// 0x30adf32d
// declared property getter: - (id)effectAttributes;	// 0x30adf58d
// declared property getter: - (id)effectID;	// 0x30adf761
- (id)imprint;	// 0x30adb521
- (id)imprintsForActions;	// 0x30adfabd
- (id)insertSlideAtIndex:(int)index;	// 0x30adc3a5
- (id)insertSlideForAsset:(id)asset atIndex:(unsigned)index;	// 0x30adc83d
- (id)insertSlideForContainer:(id)container atIndex:(unsigned)index;	// 0x30adcdb9
- (id)insertSlidesForAssets:(id)assets atIndex:(unsigned)index;	// 0x30adc8bd
- (id)insertTextForAsset:(id)asset andKey:(id)key atIndex:(unsigned)index;	// 0x30ade6d1
- (id)insertTextForAttributedString:(id)attributedString atIndex:(unsigned)index;	// 0x30ade139
- (id)insertTextsForAssets:(id)assets andKey:(id)key atIndex:(unsigned)index;	// 0x30ade729
- (id)insertTextsForAttributedStrings:(id)attributedStrings atIndex:(unsigned)index;	// 0x30ade189
// declared property getter: - (BOOL)isLive;	// 0x30adf799
- (void)moveSlidesAtIndices:(id)indices toIndex:(unsigned)index;	// 0x30add5c9
- (void)moveTextsAtIndices:(id)indices toIndex:(unsigned)index;	// 0x30adf0c5
// declared property getter: - (unsigned)nextAvailableSlideIndex;	// 0x30adbc4d
// declared property getter: - (unsigned)nextAvailableTextIndex;	// 0x30addc09
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x30adb811
// declared property getter: - (id)orderedSlides;	// 0x30adb9b9
// declared property getter: - (id)orderedTexts;	// 0x30add98d
- (void)removeActionForKey:(id)key;	// 0x30ae009d
- (void)removeAllActions;	// 0x30ae01ad
- (void)removeAllSlides;	// 0x30add575
- (void)removeAllTexts;	// 0x30adf071
- (void)removeSlidesAtIndices:(id)indices;	// 0x30add1dd
- (void)removeTextsAtIndices:(id)indices;	// 0x30adec81
- (void)setAction:(id)action forKey:(id)key;	// 0x30adff39
- (void)setEffectAttribute:(id)attribute forKey:(id)key;	// 0x30adf419
// declared property setter: - (void)setEffectAttributes:(id)attributes;	// 0x30adf655
// declared property setter: - (void)setEffectID:(id)anId;	// 0x30adf775
// declared property setter: - (void)setIsLive:(BOOL)live;	// 0x30adf7a9
- (id)slideAtIndex:(unsigned)index;	// 0x30adbe3d
// declared property getter: - (id)slides;	// 0x30adb885
- (id)textAtIndex:(unsigned)index;	// 0x30adddf9
// declared property getter: - (id)texts;	// 0x30add859
@end

