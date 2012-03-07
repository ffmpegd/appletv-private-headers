/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import "MPAnimationSupport.h"
#import "ATVSlideshow-Structs.h"
#import "MPFilterSupport.h"
#import "MPAudioSupport.h"
#import "MPActionableSupport.h"
#import "MPGeometrySupport.h"
#import "MPEffectSupport.h"
#import "MPActionableSupportInternal.h"
#import <NSObject.h> // Unknown library

@class MPEffectInternal, MCPlugParallel, MPEffectContainer, NSString, NSArray, NSMutableDictionary, NSMutableArray, MPAudioPlaylist, MCContainerEffect;
@protocol MZEffectTiming;

@interface MPEffect : NSObject <MPActionableSupportInternal, NSCoding, NSCopying, MPFilterSupport, MPAnimationSupport, MPAudioSupport, MPActionableSupport, MPGeometrySupport, MPEffectSupport> {
@private
	NSMutableArray *_slides;	// 4 = 0x4
	NSMutableArray *_secondarySlides;	// 8 = 0x8
	NSMutableArray *_texts;	// 12 = 0xc
	NSMutableArray *_filters;	// 16 = 0x10
	NSMutableDictionary *_attributes;	// 20 = 0x14
	NSMutableDictionary *_animationPaths;	// 24 = 0x18
	MCContainerEffect *_container;	// 28 = 0x1c
	MCPlugParallel *_plug;	// 32 = 0x20
	MPAudioPlaylist *_audioPlaylist;	// 36 = 0x24
	MPEffectContainer *_parentContainer;	// 40 = 0x28
	BOOL _replaceSlides;	// 44 = 0x2c
	BOOL _supportsEffectTiming;	// 45 = 0x2d
	NSObject<MZEffectTiming> *_effectTiming;	// 48 = 0x30
	MPEffectInternal *_internal;	// 52 = 0x34
}
@property(readonly, retain) NSMutableDictionary *animationPaths;	// G=0x334c1425; converted property
@property(retain) MPAudioPlaylist *audioPlaylist;	// G=0x334c174d; S=0x334c175d; converted property
@property(assign) int audioPriority;	// G=0x334c18e5; S=0x334c1905; converted property
@property(retain) MCContainerEffect *container;	// G=0x334c1bc9; S=0x334c4179; converted property
@property(retain) id effectAttributes;	// G=0x334bca59; S=0x334bcaf1; converted property
@property(copy, nonatomic) NSString *effectID;	// G=0x334bc771; S=0x334bc791; 
@property(readonly, assign) NSObject<MZEffectTiming> *effectTiming;	// G=0x334c1ad9; @synthesize=_effectTiming
@property(readonly, retain) NSMutableArray *filters;	// G=0x334c0ce9; converted property
@property(assign) double fullDuration;	// G=0x334c2969; S=0x334c29c9; converted property
@property(assign) float height;	// G=0x334c57c1; S=0x334c5805; converted property
@property(assign) int liveIndex;	// G=0x334c1b89; S=0x334c1ba9; converted property
@property(assign) double mainDuration;	// G=0x334be10d; S=0x334be12d; 
@property(assign) float opacity;	// G=0x334bce19; S=0x334bce39; converted property
@property(retain) MPEffectContainer *parentContainer;	// G=0x334c19a9; S=0x334c4b81; converted property
@property(assign) double phaseInDuration;	// G=0x334bda19; S=0x334bda39; 
@property(assign) double phaseOutDuration;	// G=0x334bdd91; S=0x334bddb1; 
@property(retain) MCPlugParallel *plug;	// G=0x334c1bd9; S=0x334c3bbd; converted property
@property(assign) CGPoint position;	// G=0x334bd0ed; S=0x334bd11d; converted property
@property(copy, nonatomic) NSString *presetID;	// G=0x334bc8c5; S=0x334bc8f9; 
@property(assign) int randomSeed;	// G=0x334c19b9; S=0x334c19d9; converted property
@property(assign) BOOL replaceSlides;	// G=0x334c00ed; S=0x334c00fd; 
@property(assign) float rotationAngle;	// G=0x334bd41d; S=0x334bd43d; converted property
@property(assign) float scale;	// G=0x334bcf81; S=0x334bcfa1; converted property
@property(retain) id scriptingAnimations;	// G=0x334c58b1; S=0x334c5c15; converted property
@property(readonly, retain) NSMutableArray *secondarySlides;	// G=0x334bf895; converted property
@property(assign) CGSize size;	// G=0x334bd585; S=0x334bd5b5; converted property
@property(readonly, assign) NSArray *slides;	// G=0x334be505; 
@property(readonly, assign) BOOL supportsEffectTiming;	// G=0x334c2ea1; converted property
@property(readonly, assign) NSArray *texts;	// G=0x334c0509; 
@property(assign) float width;	// G=0x334c5839; S=0x334c587d; converted property
@property(assign) float xPosition;	// G=0x334c56d1; S=0x334c5715; converted property
@property(assign) float xRotationAngle;	// G=0x334bd749; S=0x334bd769; converted property
@property(assign) float yPosition;	// G=0x334c5749; S=0x334c578d; converted property
@property(assign) float yRotationAngle;	// G=0x334bd8b1; S=0x334bd8d1; converted property
@property(assign) float zPosition;	// G=0x334bd2b5; S=0x334bd2d5; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x334ba331
+ (id)effectWithEffectID:(id)effectID;	// 0x334ba381
+ (id)effectWithEffectID:(id)effectID andPaths:(id)paths;	// 0x334ba3bd
+ (id)effectWithEffectID:(id)effectID andStrings:(id)strings;	// 0x334ba3fd
+ (id)effectWithEffectID:(id)effectID strings:(id)strings paths:(id)paths;	// 0x334ba43d
- (id)init;	// 0x334ba71d
- (id)initWithCoder:(id)coder;	// 0x334bb7c1
- (id)initWithEffectID:(id)effectID;	// 0x334ba485
- (id)initWithEffectID:(id)effectID andPaths:(id)paths;	// 0x334ba499
- (id)initWithEffectID:(id)effectID andStrings:(id)strings;	// 0x334ba565
- (id)initWithEffectID:(id)effectID strings:(id)strings paths:(id)paths;	// 0x334ba635
- (void)_updateEffectTiming;	// 0x334c010d
- (void)_updateTiming:(BOOL)timing;	// 0x334c0319
- (void)addFilter:(id)filter;	// 0x334c0cf9
- (void)addFilters:(id)filters;	// 0x334c0d59
- (void)addSecondarySlide:(id)slide;	// 0x334bf8a5
- (void)addSecondarySlides:(id)slides;	// 0x334bf905
- (void)addSlide:(id)slide;	// 0x334be515
- (void)addSlides:(id)slides;	// 0x334be575
- (void)addText:(id)text;	// 0x334c0519
- (void)addTexts:(id)texts;	// 0x334c0579
- (id)animationPathForKey:(id)key;	// 0x334c1435
// converted property getter: - (id)animationPaths;	// 0x334c1425
// converted property getter: - (id)audioPlaylist;	// 0x334c174d
// converted property getter: - (int)audioPriority;	// 0x334c18e5
- (void)cleanup;	// 0x334c3a99
// converted property getter: - (id)container;	// 0x334c1bc9
- (void)copyAnimationPaths:(id)paths;	// 0x334c3979
- (void)copyAudioPlaylist:(id)playlist;	// 0x334c3a55
- (void)copyFilters:(id)filters;	// 0x334c3881
- (void)copySecondarySlides:(id)slides;	// 0x334c3691
- (void)copySlides:(id)slides;	// 0x334c3599
- (void)copyStruct:(id)aStruct;	// 0x334c3281
- (void)copyTexts:(id)texts;	// 0x334c3789
- (id)copyWithZone:(NSZone *)zone;	// 0x334bc481
- (int)countOfFilters;	// 0x334c55a1
- (int)countOfSlides;	// 0x334c5341
- (int)countOfTexts;	// 0x334c5471
- (void)createSecondarySlidesWithPaths:(id)paths;	// 0x334c2569
- (void)createSlidesWithPaths:(id)paths;	// 0x334c23ed
- (void)createTextsWithDefaultStrings;	// 0x334c1be9
- (void)createTextsWithStrings:(id)strings secondLineFactor:(float)factor;	// 0x334c1fcd
- (void)createTextsWithStrings:(id)strings secondLineFactor:(float)factor fillIn:(BOOL)anIn;	// 0x334c1ff1
- (void)dealloc;	// 0x334bc5e5
- (id)description;	// 0x334baa41
- (void)dump;	// 0x334c2a35
- (id)effectAttributeForKey:(id)key;	// 0x334bcbf1
// converted property getter: - (id)effectAttributes;	// 0x334bca59
// declared property getter: - (id)effectID;	// 0x334bc771
- (id)effectPresetID;	// 0x334c2e41
// declared property getter: - (id)effectTiming;	// 0x334c1ad9
- (void)encodeWithCoder:(id)coder;	// 0x334baebd
// converted property getter: - (id)filters;	// 0x334c0ce9
- (void)finalize;	// 0x334bc5a5
- (id)fullDebugLog;	// 0x334c2a5d
// converted property getter: - (double)fullDuration;	// 0x334c2969
- (BOOL)hasMovies;	// 0x334c5265
// converted property getter: - (float)height;	// 0x334c57c1
- (void)insertFilters:(id)filters atIndex:(int)index;	// 0x334c0d9d
- (void)insertObject:(id)object inFiltersAtIndex:(int)index;	// 0x334c55e1
- (void)insertObject:(id)object inSlidesAtIndex:(int)index;	// 0x334c5381
- (void)insertObject:(id)object inTextsAtIndex:(int)index;	// 0x334c54b1
- (void)insertSecondarySlides:(id)slides atIndex:(int)index;	// 0x334bf949
- (void)insertSlides:(id)slides atIndex:(int)index;	// 0x334be5b9
- (void)insertTexts:(id)texts atIndex:(int)index;	// 0x334c05bd
- (BOOL)isTextOnly;	// 0x334c0ca1
// converted property getter: - (int)liveIndex;	// 0x334c1b89
- (double)lowestDisplayTime;	// 0x334c04cd
// declared property getter: - (double)mainDuration;	// 0x334be10d
- (int)maxNumberOfSecondarySlides;	// 0x334c1b39
- (int)maxNumberOfSlides;	// 0x334c1ae9
- (void)moveFiltersFromIndices:(id)indices toIndex:(int)index;	// 0x334c1349
- (void)moveSlidesFromIndices:(id)indices toIndex:(int)index;	// 0x334bf7c1
- (void)moveTextsFromIndices:(id)indices toIndex:(int)index;	// 0x334c0bcd
- (id)nearestLayerGroup;	// 0x334c5319
- (id)nearestPlug;	// 0x334c3241
- (BOOL)needsParallelizer;	// 0x334c4c31
- (id)objectID;	// 0x334c31c1
- (id)objectInFiltersAtIndex:(int)index;	// 0x334c55c1
- (id)objectInSlidesAtIndex:(int)index;	// 0x334c5361
- (id)objectInTextsAtIndex:(int)index;	// 0x334c5491
// converted property getter: - (float)opacity;	// 0x334bce19
// converted property getter: - (id)parentContainer;	// 0x334c19a9
- (id)parentDocument;	// 0x334c3209
// declared property getter: - (double)phaseInDuration;	// 0x334bda19
// declared property getter: - (double)phaseOutDuration;	// 0x334bdd91
// converted property getter: - (id)plug;	// 0x334c1bd9
- (id)plugID;	// 0x334c3199
// converted property getter: - (CGPoint)position;	// 0x334bd0ed
// declared property getter: - (id)presetID;	// 0x334bc8c5
// converted property getter: - (int)randomSeed;	// 0x334c19b9
- (void)reconfigureSlides;	// 0x334c26e9
- (void)removeAllFilters;	// 0x334c12e9
- (void)removeAllSecondarySlides;	// 0x334c0031
- (void)removeAllSlides;	// 0x334bf5c9
- (void)removeAllTexts;	// 0x334c0b6d
- (void)removeAnimationPathForKey:(id)key;	// 0x334c1645
- (void)removeFiltersAtIndices:(id)indices;	// 0x334c10bd
- (void)removeObjectFromFiltersAtIndex:(int)index;	// 0x334c5621
- (void)removeObjectFromSlidesAtIndex:(int)index;	// 0x334c53c1
- (void)removeObjectFromTextsAtIndex:(int)index;	// 0x334c54f1
- (void)removeSecondarySlidesAtIndices:(id)indices;	// 0x334bfe05
- (void)removeSlidesAtIndices:(id)indices;	// 0x334bf085
- (void)removeTextsAtIndices:(id)indices;	// 0x334c0989
- (void)replaceObjectInFiltersAtIndex:(int)index withObject:(id)object;	// 0x334c565d
- (void)replaceObjectInSlidesAtIndex:(int)index withObject:(id)object;	// 0x334c53fd
- (void)replaceObjectInTextsAtIndex:(int)index withObject:(id)object;	// 0x334c552d
- (void)replaceSlide:(id)slide atIndex:(int)index;	// 0x334bf7a9
- (void)replaceSlideAtIndex:(int)index withSlide:(id)slide;	// 0x334bf62d
// declared property getter: - (BOOL)replaceSlides;	// 0x334c00ed
- (void)replaceTextsWitStrings:(id)strings;	// 0x334c1d4d
// converted property getter: - (float)rotationAngle;	// 0x334bd41d
// converted property getter: - (float)scale;	// 0x334bcf81
- (void)scaleMainDuration;	// 0x334c4e4d
// converted property getter: - (id)scriptingAnimations;	// 0x334c58b1
// converted property getter: - (id)secondarySlides;	// 0x334bf895
- (void)setAnimationPath:(id)path forKey:(id)key;	// 0x334c1461
// converted property setter: - (void)setAudioPlaylist:(id)playlist;	// 0x334c175d
// converted property setter: - (void)setAudioPriority:(int)priority;	// 0x334c1905
// converted property setter: - (void)setContainer:(id)container;	// 0x334c4179
- (void)setEffectAttribute:(id)attribute forKey:(id)key;	// 0x334bcc8d
// converted property setter: - (void)setEffectAttributes:(id)attributes;	// 0x334bcaf1
// declared property setter: - (void)setEffectID:(id)anId;	// 0x334bc791
// converted property setter: - (void)setFullDuration:(double)duration;	// 0x334c29c9
// converted property setter: - (void)setHeight:(float)height;	// 0x334c5805
// converted property setter: - (void)setLiveIndex:(int)index;	// 0x334c1ba9
// declared property setter: - (void)setMainDuration:(double)duration;	// 0x334be12d
// converted property setter: - (void)setOpacity:(float)opacity;	// 0x334bce39
// converted property setter: - (void)setParentContainer:(id)container;	// 0x334c4b81
// declared property setter: - (void)setPhaseInDuration:(double)duration;	// 0x334bda39
// declared property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x334bddb1
// converted property setter: - (void)setPlug:(id)plug;	// 0x334c3bbd
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x334bd11d
// declared property setter: - (void)setPresetID:(id)anId;	// 0x334bc8f9
// converted property setter: - (void)setRandomSeed:(int)seed;	// 0x334c19d9
// declared property setter: - (void)setReplaceSlides:(BOOL)slides;	// 0x334c00fd
// converted property setter: - (void)setRotationAngle:(float)angle;	// 0x334bd43d
// converted property setter: - (void)setScale:(float)scale;	// 0x334bcfa1
// converted property setter: - (void)setScriptingAnimations:(id)animations;	// 0x334c5c15
// converted property setter: - (void)setSize:(CGSize)size;	// 0x334bd5b5
// converted property setter: - (void)setWidth:(float)width;	// 0x334c587d
// converted property setter: - (void)setXPosition:(float)position;	// 0x334c5715
// converted property setter: - (void)setXRotationAngle:(float)angle;	// 0x334bd769
// converted property setter: - (void)setYPosition:(float)position;	// 0x334c578d
// converted property setter: - (void)setYRotationAngle:(float)angle;	// 0x334bd8d1
// converted property setter: - (void)setZPosition:(float)position;	// 0x334bd2d5
// converted property getter: - (CGSize)size;	// 0x334bd585
- (id)slideInformation;	// 0x334c2eb1
// declared property getter: - (id)slides;	// 0x334be505
// converted property getter: - (BOOL)supportsEffectTiming;	// 0x334c2ea1
- (BOOL)supportsUnlimitedSlides;	// 0x334c0095
// declared property getter: - (id)texts;	// 0x334c0509
- (void)updateEffectAttributes;	// 0x334c30c5
- (id)uuid;	// 0x334c31e9
- (id)videoPaths;	// 0x334c2d61
// converted property getter: - (float)width;	// 0x334c5839
// converted property getter: - (float)xPosition;	// 0x334c56d1
// converted property getter: - (float)xRotationAngle;	// 0x334bd749
// converted property getter: - (float)yPosition;	// 0x334c5749
// converted property getter: - (float)yRotationAngle;	// 0x334bd8b1
- (int)zIndex;	// 0x334be491
// converted property getter: - (float)zPosition;	// 0x334bd2b5
@end

