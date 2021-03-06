/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import "MPAnimationSupport.h"
#import "MPFilterSupport.h"
#import "ATVSlideshow-Structs.h"
#import "MPAudioSupport.h"
#import "MPActionableSupport.h"
#import "MPGeometrySupport.h"
#import "MPEffectSupport.h"
#import "MPActionableSupportInternal.h"
#import <NSObject.h> // Unknown library

@class MPEffectContainer, MCContainerEffect, NSString, NSArray, NSMutableDictionary, NSMutableArray, MPAudioPlaylist, MCPlugParallel;
@protocol MZEffectTiming;

@interface MPEffect : NSObject <MPActionableSupportInternal, NSCoding, NSCopying, MPFilterSupport, MPAnimationSupport, MPAudioSupport, MPActionableSupport, MPGeometrySupport, MPEffectSupport> {
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
	BOOL _skipEffectTiming;	// 46 = 0x2e
	NSObject<MZEffectTiming> *_effectTiming;	// 48 = 0x30
	float _opacity;	// 52 = 0x34
	CGPoint _position;	// 56 = 0x38
	float _zPosition;	// 64 = 0x40
	CGSize _size;	// 68 = 0x44
	float _rotationAngle;	// 76 = 0x4c
	float _xRotationAngle;	// 80 = 0x50
	float _yRotationAngle;	// 84 = 0x54
	float _scale;	// 88 = 0x58
	double _timeIn;	// 92 = 0x5c
	double _phaseInDuration;	// 100 = 0x64
	double _phaseOutDuration;	// 108 = 0x6c
	double _mainDuration;	// 116 = 0x74
	NSString *_effectID;	// 124 = 0x7c
	NSString *_presetID;	// 128 = 0x80
	int _audioPriority;	// 132 = 0x84
	int _randomSeed;	// 136 = 0x88
	NSString *_uuid;	// 140 = 0x8c
	int _liveIndex;	// 144 = 0x90
	BOOL _cleaningUp;	// 148 = 0x94
}
@property(readonly, retain) NSMutableDictionary *animationPaths;	// G=0x323f0545; converted property
@property(retain) MPAudioPlaylist *audioPlaylist;	// G=0x323f07b5; S=0x323f07c5; converted property
@property(assign) int audioPriority;	// G=0x323f08f1; S=0x323f0901; converted property
@property(retain) MCContainerEffect *container;	// G=0x323f0aa5; S=0x323f33e1; converted property
@property(retain) id effectAttributes;	// G=0x323ec539; S=0x323ec549; converted property
@property(copy, nonatomic) NSString *effectID;	// G=0x323ec309; S=0x323ec319; 
@property(readonly, assign, nonatomic) NSObject<MZEffectTiming> *effectTiming;	// G=0x323f09d5; @synthesize=_effectTiming
@property(readonly, retain) NSMutableArray *filters;	// G=0x323efe7d; converted property
@property(assign) double fullDuration;	// G=0x323ece79; S=0x323eced9; converted property
@property(assign) float height;	// G=0x323f4ac1; S=0x323f4af5; converted property
@property(assign) int liveIndex;	// G=0x323f0a85; S=0x323f0a95; converted property
@property(assign, nonatomic) double mainDuration;	// G=0x323ed469; S=0x323ed481; 
@property(assign) float opacity;	// G=0x323ec669; S=0x323ec679; converted property
@property(retain) MPEffectContainer *parentContainer;	// G=0x323f0925; S=0x323f3c6d; converted property
@property(assign, nonatomic) double phaseInDuration;	// G=0x323ecf45; S=0x323ecf5d; 
@property(assign, nonatomic) double phaseOutDuration;	// G=0x323ed1d5; S=0x323ed1ed; 
@property(retain) MCPlugParallel *plug;	// G=0x323f0ab5; S=0x323f2e41; converted property
@property(assign) CGPoint position;	// G=0x323ec859; S=0x323ec871; converted property
@property(copy, nonatomic) NSString *presetID;	// G=0x323ec471; S=0x323ec495; 
@property(assign) int randomSeed;	// G=0x323f0935; S=0x323f0945; converted property
@property(assign, nonatomic) BOOL replaceSlides;	// G=0x323ef345; S=0x323ef355; 
@property(assign) float rotationAngle;	// G=0x323eca7d; S=0x323eca8d; converted property
@property(assign) float scale;	// G=0x323ec761; S=0x323ec771; converted property
@property(retain) id scriptingAnimations;	// G=0x323f4b91; S=0x323f4efd; converted property
@property(readonly, retain) NSMutableArray *secondarySlides;	// G=0x323eeac1; converted property
@property(assign) CGSize size;	// G=0x323ecb6d; S=0x323ecb85; converted property
@property(readonly, assign, nonatomic) NSArray *slides;	// G=0x323ed775; 
@property(readonly, assign) BOOL supportsEffectTiming;	// G=0x323f1fb1; converted property
@property(readonly, assign, nonatomic) NSArray *texts;	// G=0x323ef6d1; 
@property(readonly, retain) NSString *uuid;	// G=0x323f241d; converted property
@property(assign) float width;	// G=0x323f4b29; S=0x323f4b5d; converted property
@property(assign) float xPosition;	// G=0x323f49f1; S=0x323f4a25; converted property
@property(assign) float xRotationAngle;	// G=0x323ecc99; S=0x323ecca9; converted property
@property(assign) float yPosition;	// G=0x323f4a59; S=0x323f4a8d; converted property
@property(assign) float yRotationAngle;	// G=0x323ecd89; S=0x323ecd99; converted property
@property(assign) float zPosition;	// G=0x323ec98d; S=0x323ec99d; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x323ea199
+ (id)effectWithEffectID:(id)effectID;	// 0x323ea1e9
+ (id)effectWithEffectID:(id)effectID andPaths:(id)paths;	// 0x323ea225
+ (id)effectWithEffectID:(id)effectID andStrings:(id)strings;	// 0x323ea265
+ (id)effectWithEffectID:(id)effectID strings:(id)strings paths:(id)paths;	// 0x323ea2a5
- (id)init;	// 0x323ea711
- (id)initWithCoder:(id)coder;	// 0x323eb4a9
- (id)initWithEffectID:(id)effectID;	// 0x323ea2ed
- (id)initWithEffectID:(id)effectID andPaths:(id)paths;	// 0x323ea301
- (id)initWithEffectID:(id)effectID andStrings:(id)strings;	// 0x323ea451
- (id)initWithEffectID:(id)effectID strings:(id)strings paths:(id)paths;	// 0x323ea5a5
- (id)_effectAttributes;	// 0x323f1d2d
- (void)_updateEffectTimingWithDocument:(id)document;	// 0x323ef365
- (void)_updateTiming:(BOOL)timing;	// 0x323ef4f9
- (void)addFilter:(id)filter;	// 0x323efe8d
- (void)addFilters:(id)filters;	// 0x323efeed
- (void)addSecondarySlide:(id)slide;	// 0x323eead1
- (void)addSecondarySlides:(id)slides;	// 0x323eeb5d
- (void)addSlide:(id)slide;	// 0x323ed785
- (void)addSlides:(id)slides;	// 0x323ed811
- (void)addText:(id)text;	// 0x323ef6e1
- (void)addTexts:(id)texts;	// 0x323ef76d
- (id)animationPathForKey:(id)key;	// 0x323f0555
// converted property getter: - (id)animationPaths;	// 0x323f0545
- (void)applyFormattedAttributes;	// 0x323f1ed9
// converted property getter: - (id)audioPlaylist;	// 0x323f07b5
// converted property getter: - (int)audioPriority;	// 0x323f08f1
- (void)cleanup;	// 0x323f2cd9
// converted property getter: - (id)container;	// 0x323f0aa5
- (void)copyAnimationPaths:(id)paths;	// 0x323f2b8d
- (void)copyAudioPlaylist:(id)playlist;	// 0x323f2c95
- (void)copyFilters:(id)filters;	// 0x323f2a4d
- (void)copySecondarySlides:(id)slides;	// 0x323f27cd
- (void)copySlides:(id)slides;	// 0x323f268d
- (void)copyTexts:(id)texts;	// 0x323f290d
- (void)copyVars:(id)vars;	// 0x323f24a5
- (id)copyWithZone:(NSZone *)zone;	// 0x323ec005
- (int)countOfFilters;	// 0x323f48c1
- (int)countOfSlides;	// 0x323f4661
- (int)countOfTexts;	// 0x323f4791
- (void)createSecondarySlidesWithPaths:(id)paths;	// 0x323f1451
- (void)createSlidesWithPaths:(id)paths;	// 0x323f129d
- (void)createTextsWithDefaultStrings;	// 0x323f0ac5
- (void)createTextsWithStrings:(id)strings secondLineFactor:(float)factor;	// 0x323f0eb1
- (void)createTextsWithStrings:(id)strings secondLineFactor:(float)factor fillIn:(BOOL)anIn;	// 0x323f0ed5
- (void)dealloc;	// 0x323ec15d
- (id)description;	// 0x323ea941
- (void)dump;	// 0x323f18ad
- (id)effectAttributeForKey:(id)key;	// 0x323ec5a1
// converted property getter: - (id)effectAttributes;	// 0x323ec539
// declared property getter: - (id)effectID;	// 0x323ec309
- (id)effectPresetID;	// 0x323f1ca9
// declared property getter: - (id)effectTiming;	// 0x323f09d5
- (void)encodeWithCoder:(id)coder;	// 0x323ead69
// converted property getter: - (id)filters;	// 0x323efe7d
- (void)finalize;	// 0x323ec11d
- (id)formattedAttributes;	// 0x323f1dd5
- (id)fullDebugLog;	// 0x323f18d5
// converted property getter: - (double)fullDuration;	// 0x323ece79
- (BOOL)hasBreaksInDocument:(id)document;	// 0x323f4361
- (BOOL)hasMovies;	// 0x323f4291
// converted property getter: - (float)height;	// 0x323f4ac1
- (void)insertFilters:(id)filters atIndex:(int)index;	// 0x323eff31
- (void)insertObject:(id)object inFiltersAtIndex:(int)index;	// 0x323f4901
- (void)insertObject:(id)object inSlidesAtIndex:(int)index;	// 0x323f46a1
- (void)insertObject:(id)object inTextsAtIndex:(int)index;	// 0x323f47d1
- (void)insertSecondarySlides:(id)slides atIndex:(int)index;	// 0x323eeba1
- (void)insertSlides:(id)slides atIndex:(int)index;	// 0x323ed855
- (void)insertTexts:(id)texts atIndex:(int)index;	// 0x323ef7b1
- (BOOL)isTextOnly;	// 0x323efe31
// converted property getter: - (int)liveIndex;	// 0x323f0a85
- (double)lowestDisplayTime;	// 0x323ef699
// declared property getter: - (double)mainDuration;	// 0x323ed469
- (int)maxNumberOfSecondarySlides;	// 0x323f0a35
- (int)maxNumberOfSlides;	// 0x323f09e5
- (void)moveFiltersFromIndices:(id)indices toIndex:(int)index;	// 0x323f0451
- (void)moveSlidesFromIndices:(id)indices toIndex:(int)index;	// 0x323ee9c9
- (void)moveTextsFromIndices:(id)indices toIndex:(int)index;	// 0x323efd39
- (id)nearestLayerGroup;	// 0x323f4431
- (id)nearestPlug;	// 0x323f2465
- (BOOL)needsParallelizer;	// 0x323f3ccd
- (id)objectID;	// 0x323f23f5
- (id)objectInFiltersAtIndex:(int)index;	// 0x323f48e1
- (id)objectInSlidesAtIndex:(int)index;	// 0x323f4681
- (id)objectInTextsAtIndex:(int)index;	// 0x323f47b1
// converted property getter: - (float)opacity;	// 0x323ec669
// converted property getter: - (id)parentContainer;	// 0x323f0925
- (id)parentDocument;	// 0x323f242d
// declared property getter: - (double)phaseInDuration;	// 0x323ecf45
// declared property getter: - (double)phaseOutDuration;	// 0x323ed1d5
// converted property getter: - (id)plug;	// 0x323f0ab5
- (id)plugID;	// 0x323f23cd
// converted property getter: - (CGPoint)position;	// 0x323ec859
// declared property getter: - (id)presetID;	// 0x323ec471
// converted property getter: - (int)randomSeed;	// 0x323f0935
- (void)reconfigureSlides;	// 0x323f1605
- (void)removeAllFilters;	// 0x323f03b1
- (void)removeAllSecondarySlides;	// 0x323ef249
- (void)removeAllSlides;	// 0x323ee749
- (void)removeAllTexts;	// 0x323efc99
- (void)removeAnimationPathForKey:(id)key;	// 0x323f070d
- (void)removeFiltersAtIndices:(id)indices;	// 0x323f021d
- (void)removeObjectFromFiltersAtIndex:(int)index;	// 0x323f4941
- (void)removeObjectFromSlidesAtIndex:(int)index;	// 0x323f46e1
- (void)removeObjectFromTextsAtIndex:(int)index;	// 0x323f4811
- (void)removeSecondarySlidesAtIndices:(id)indices;	// 0x323ef009
- (void)removeSlidesAtIndices:(id)indices;	// 0x323ee2ad
- (void)removeTextsAtIndices:(id)indices;	// 0x323efb31
- (void)replaceObjectInFiltersAtIndex:(int)index withObject:(id)object;	// 0x323f497d
- (void)replaceObjectInSlidesAtIndex:(int)index withObject:(id)object;	// 0x323f471d
- (void)replaceObjectInTextsAtIndex:(int)index withObject:(id)object;	// 0x323f484d
- (void)replaceSlide:(id)slide atIndex:(int)index;	// 0x323ee9b1
- (void)replaceSlideAtIndex:(int)index withSlide:(id)slide;	// 0x323ee7ed
// declared property getter: - (BOOL)replaceSlides;	// 0x323ef345
- (void)replaceTextsWitStrings:(id)strings;	// 0x323f0c29
// converted property getter: - (float)rotationAngle;	// 0x323eca7d
// converted property getter: - (float)scale;	// 0x323ec761
- (void)scaleMainDuration;	// 0x323f3ee1
// converted property getter: - (id)scriptingAnimations;	// 0x323f4b91
// converted property getter: - (id)secondarySlides;	// 0x323eeac1
- (void)setAnimationPath:(id)path forKey:(id)key;	// 0x323f0581
// converted property setter: - (void)setAudioPlaylist:(id)playlist;	// 0x323f07c5
// converted property setter: - (void)setAudioPriority:(int)priority;	// 0x323f0901
// converted property setter: - (void)setContainer:(id)container;	// 0x323f33e1
- (void)setEffectAttribute:(id)attribute forKey:(id)key;	// 0x323ec5cd
// converted property setter: - (void)setEffectAttributes:(id)attributes;	// 0x323ec549
// declared property setter: - (void)setEffectID:(id)anId;	// 0x323ec319
// converted property setter: - (void)setFullDuration:(double)duration;	// 0x323eced9
// converted property setter: - (void)setHeight:(float)height;	// 0x323f4af5
// converted property setter: - (void)setLiveIndex:(int)index;	// 0x323f0a95
// declared property setter: - (void)setMainDuration:(double)duration;	// 0x323ed481
// converted property setter: - (void)setOpacity:(float)opacity;	// 0x323ec679
// converted property setter: - (void)setParentContainer:(id)container;	// 0x323f3c6d
// declared property setter: - (void)setPhaseInDuration:(double)duration;	// 0x323ecf5d
// declared property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x323ed1ed
// converted property setter: - (void)setPlug:(id)plug;	// 0x323f2e41
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x323ec871
// declared property setter: - (void)setPresetID:(id)anId;	// 0x323ec495
// converted property setter: - (void)setRandomSeed:(int)seed;	// 0x323f0945
// declared property setter: - (void)setReplaceSlides:(BOOL)slides;	// 0x323ef355
// converted property setter: - (void)setRotationAngle:(float)angle;	// 0x323eca8d
// converted property setter: - (void)setScale:(float)scale;	// 0x323ec771
// converted property setter: - (void)setScriptingAnimations:(id)animations;	// 0x323f4efd
// converted property setter: - (void)setSize:(CGSize)size;	// 0x323ecb85
- (void)setSkipEffectTiming:(BOOL)timing;	// 0x323f1d09
// converted property setter: - (void)setWidth:(float)width;	// 0x323f4b5d
// converted property setter: - (void)setXPosition:(float)position;	// 0x323f4a25
// converted property setter: - (void)setXRotationAngle:(float)angle;	// 0x323ecca9
// converted property setter: - (void)setYPosition:(float)position;	// 0x323f4a8d
// converted property setter: - (void)setYRotationAngle:(float)angle;	// 0x323ecd99
// converted property setter: - (void)setZPosition:(float)position;	// 0x323ec99d
// converted property getter: - (CGSize)size;	// 0x323ecb6d
- (id)slideForMCSlide:(id)mcslide;	// 0x323f4459
- (id)slideInformationWithDocument:(id)document;	// 0x323f1fc1
// declared property getter: - (id)slides;	// 0x323ed775
// converted property getter: - (BOOL)supportsEffectTiming;	// 0x323f1fb1
- (BOOL)supportsUnlimitedSlides;	// 0x323ef2ed
// declared property getter: - (id)texts;	// 0x323ef6d1
- (void)updateEffectAttributes;	// 0x323f232d
- (void)updateTiming;	// 0x323f1d19
// converted property getter: - (id)uuid;	// 0x323f241d
- (id)videoPaths;	// 0x323f1ba9
// converted property getter: - (float)width;	// 0x323f4b29
// converted property getter: - (float)xPosition;	// 0x323f49f1
// converted property getter: - (float)xRotationAngle;	// 0x323ecc99
// converted property getter: - (float)yPosition;	// 0x323f4a59
// converted property getter: - (float)yRotationAngle;	// 0x323ecd89
- (int)zIndex;	// 0x323ed701
// converted property getter: - (float)zPosition;	// 0x323ec98d
@end

