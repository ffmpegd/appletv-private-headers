/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "NSCoding.h"
#import "ATVSlideshow-Structs.h"
#import "NSCopying.h"
#import "MPAnimationSupport.h"
#import "MPFilterSupport.h"
#import "MPAudioSupport.h"
#import "MPActionableSupport.h"
#import "MPGeometrySupport.h"
#import "MPEffectSupport.h"
#import "MPActionableSupportInternal.h"
#import </libobjc.A.h>

@class MPEffectContainer, NSString, MCContainerEffect, NSArray, NSMutableDictionary, NSMutableArray, MPAudioPlaylist, MCPlugParallel;
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
@property(readonly, retain) NSMutableDictionary *animationPaths;	// G=0x2fb9e78d; converted property
@property(retain) MPAudioPlaylist *audioPlaylist;	// G=0x2fb9ea05; S=0x2fb9ea15; converted property
@property(assign) int audioPriority;	// G=0x2fb9eb49; S=0x2fb9eb59; converted property
@property(retain) MCContainerEffect *container;	// G=0x2fb9ecfd; S=0x2fba1691; converted property
@property(retain) id effectAttributes;	// G=0x2fb9a775; S=0x2fb9a785; converted property
@property(copy, nonatomic) NSString *effectID;	// G=0x2fb9a545; S=0x2fb9a555; 
@property(readonly, assign, nonatomic) NSObject<MZEffectTiming> *effectTiming;	// G=0x2fb9ec2d; @synthesize=_effectTiming
@property(readonly, retain) NSMutableArray *filters;	// G=0x2fb9e0c1; converted property
@property(assign) double fullDuration;	// G=0x2fb9b0a9; S=0x2fb9b109; converted property
@property(assign) float height;	// G=0x2fba2d85; S=0x2fba2db9; converted property
@property(assign) int liveIndex;	// G=0x2fb9ecdd; S=0x2fb9eced; converted property
@property(assign, nonatomic) double mainDuration;	// G=0x2fb9b691; S=0x2fb9b6a9; 
@property(assign) float opacity;	// G=0x2fb9a8a5; S=0x2fb9a8b5; converted property
@property(retain) MPEffectContainer *parentContainer;	// G=0x2fb9eb7d; S=0x2fba1f19; converted property
@property(assign, nonatomic) double phaseInDuration;	// G=0x2fb9b175; S=0x2fb9b18d; 
@property(assign, nonatomic) double phaseOutDuration;	// G=0x2fb9b405; S=0x2fb9b41d; 
@property(retain) MCPlugParallel *plug;	// G=0x2fb9ed0d; S=0x2fba10e5; converted property
@property(assign) CGPoint position;	// G=0x2fb9aa9d; S=0x2fb9aab5; converted property
@property(copy, nonatomic) NSString *presetID;	// G=0x2fb9a6ad; S=0x2fb9a6d1; 
@property(assign) int randomSeed;	// G=0x2fb9eb8d; S=0x2fb9eb9d; converted property
@property(assign, nonatomic) BOOL replaceSlides;	// G=0x2fb9d595; S=0x2fb9d5a5; 
@property(assign) float rotationAngle;	// G=0x2fb9acb5; S=0x2fb9acc5; converted property
@property(assign) float scale;	// G=0x2fb9a9a1; S=0x2fb9a9b1; converted property
@property(retain) id scriptingAnimations;	// G=0x2fba2e55; S=0x2fba31c1; converted property
@property(readonly, retain) NSMutableArray *secondarySlides;	// G=0x2fb9cd09; converted property
@property(assign) CGSize size;	// G=0x2fb9ada9; S=0x2fb9adc1; converted property
@property(readonly, assign, nonatomic) NSArray *slides;	// G=0x2fb9b999; 
@property(readonly, assign) BOOL supportsEffectTiming;	// G=0x2fba0249; converted property
@property(readonly, assign, nonatomic) NSArray *texts;	// G=0x2fb9d919; 
@property(readonly, retain) NSString *uuid;	// G=0x2fba06b9; converted property
@property(assign) float width;	// G=0x2fba2ded; S=0x2fba2e21; converted property
@property(assign) float xPosition;	// G=0x2fba2cb5; S=0x2fba2ce9; converted property
@property(assign) float xRotationAngle;	// G=0x2fb9aec1; S=0x2fb9aed1; converted property
@property(assign) float yPosition;	// G=0x2fba2d1d; S=0x2fba2d51; converted property
@property(assign) float yRotationAngle;	// G=0x2fb9afb5; S=0x2fb9afc5; converted property
@property(assign) float zPosition;	// G=0x2fb9abc1; S=0x2fb9abd1; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x2fb983a9
+ (id)effectWithEffectID:(id)effectID;	// 0x2fb983f9
+ (id)effectWithEffectID:(id)effectID andPaths:(id)paths;	// 0x2fb98435
+ (id)effectWithEffectID:(id)effectID andStrings:(id)strings;	// 0x2fb98475
+ (id)effectWithEffectID:(id)effectID strings:(id)strings paths:(id)paths;	// 0x2fb984b5
- (id)init;	// 0x2fb9891d
- (id)initWithCoder:(id)coder;	// 0x2fb996d9
- (id)initWithEffectID:(id)effectID;	// 0x2fb984fd
- (id)initWithEffectID:(id)effectID andPaths:(id)paths;	// 0x2fb98511
- (id)initWithEffectID:(id)effectID andStrings:(id)strings;	// 0x2fb98661
- (id)initWithEffectID:(id)effectID strings:(id)strings paths:(id)paths;	// 0x2fb987b5
- (id)_effectAttributes;	// 0x2fb9ffc5
- (void)_updateEffectTimingWithDocument:(id)document;	// 0x2fb9d5b5
- (void)_updateTiming:(BOOL)timing;	// 0x2fb9d74d
- (void)addFilter:(id)filter;	// 0x2fb9e0d1
- (void)addFilters:(id)filters;	// 0x2fb9e131
- (void)addSecondarySlide:(id)slide;	// 0x2fb9cd19
- (void)addSecondarySlides:(id)slides;	// 0x2fb9cda5
- (void)addSlide:(id)slide;	// 0x2fb9b9a9
- (void)addSlides:(id)slides;	// 0x2fb9ba35
- (void)addText:(id)text;	// 0x2fb9d929
- (void)addTexts:(id)texts;	// 0x2fb9d9b5
- (id)animationPathForKey:(id)key;	// 0x2fb9e79d
// converted property getter: - (id)animationPaths;	// 0x2fb9e78d
- (void)applyFormattedAttributes;	// 0x2fba0171
// converted property getter: - (id)audioPlaylist;	// 0x2fb9ea05
// converted property getter: - (int)audioPriority;	// 0x2fb9eb49
- (void)cleanup;	// 0x2fba0f7d
// converted property getter: - (id)container;	// 0x2fb9ecfd
- (void)copyAnimationPaths:(id)paths;	// 0x2fba0e29
- (void)copyAudioPlaylist:(id)playlist;	// 0x2fba0f39
- (void)copyFilters:(id)filters;	// 0x2fba0ce9
- (void)copySecondarySlides:(id)slides;	// 0x2fba0a69
- (void)copySlides:(id)slides;	// 0x2fba0929
- (void)copyTexts:(id)texts;	// 0x2fba0ba9
- (void)copyVars:(id)vars;	// 0x2fba0741
- (id)copyWithZone:(NSZone *)zone;	// 0x2fb9a241
- (int)countOfFilters;	// 0x2fba2b85
- (int)countOfSlides;	// 0x2fba2925
- (int)countOfTexts;	// 0x2fba2a55
- (void)createSecondarySlidesWithPaths:(id)paths;	// 0x2fb9f6a5
- (void)createSlidesWithPaths:(id)paths;	// 0x2fb9f4f5
- (void)createTextsWithDefaultStrings;	// 0x2fb9ed1d
- (void)createTextsWithStrings:(id)strings secondLineFactor:(float)factor;	// 0x2fb9f105
- (void)createTextsWithStrings:(id)strings secondLineFactor:(float)factor fillIn:(BOOL)anIn;	// 0x2fb9f129
- (void)dealloc;	// 0x2fb9a399
- (id)description;	// 0x2fb98b59
- (void)dump;	// 0x2fb9fafd
- (id)effectAttributeForKey:(id)key;	// 0x2fb9a7dd
// converted property getter: - (id)effectAttributes;	// 0x2fb9a775
// declared property getter: - (id)effectID;	// 0x2fb9a545
- (id)effectPresetID;	// 0x2fb9fef9
// declared property getter: - (id)effectTiming;	// 0x2fb9ec2d
- (void)encodeWithCoder:(id)coder;	// 0x2fb98f99
// converted property getter: - (id)filters;	// 0x2fb9e0c1
- (void)finalize;	// 0x2fb9a359
- (id)formattedAttributes;	// 0x2fba006d
- (id)fullDebugLog;	// 0x2fb9fb25
// converted property getter: - (double)fullDuration;	// 0x2fb9b0a9
- (BOOL)hasBreaksInDocument:(id)document;	// 0x2fba2621
- (BOOL)hasMovies;	// 0x2fba2551
// converted property getter: - (float)height;	// 0x2fba2d85
- (void)insertFilters:(id)filters atIndex:(int)index;	// 0x2fb9e175
- (void)insertObject:(id)object inFiltersAtIndex:(int)index;	// 0x2fba2bc5
- (void)insertObject:(id)object inSlidesAtIndex:(int)index;	// 0x2fba2965
- (void)insertObject:(id)object inTextsAtIndex:(int)index;	// 0x2fba2a95
- (void)insertSecondarySlides:(id)slides atIndex:(int)index;	// 0x2fb9cde9
- (void)insertSlides:(id)slides atIndex:(int)index;	// 0x2fb9ba79
- (void)insertTexts:(id)texts atIndex:(int)index;	// 0x2fb9d9f9
- (BOOL)isLive;	// 0x2fb9ff59
- (BOOL)isTextOnly;	// 0x2fb9e075
// converted property getter: - (int)liveIndex;	// 0x2fb9ecdd
- (double)lowestDisplayTime;	// 0x2fb9d8ed
// declared property getter: - (double)mainDuration;	// 0x2fb9b691
- (int)maxNumberOfSecondarySlides;	// 0x2fb9ec8d
- (int)maxNumberOfSlides;	// 0x2fb9ec3d
- (void)moveFiltersFromIndices:(id)indices toIndex:(int)index;	// 0x2fb9e695
- (void)moveSlidesFromIndices:(id)indices toIndex:(int)index;	// 0x2fb9cc11
- (void)moveTextsFromIndices:(id)indices toIndex:(int)index;	// 0x2fb9df7d
- (id)nearestLayerGroup;	// 0x2fba26f1
- (id)nearestPlug;	// 0x2fba0701
- (BOOL)needsParallelizer;	// 0x2fba1f79
- (id)objectID;	// 0x2fba0691
- (id)objectInFiltersAtIndex:(int)index;	// 0x2fba2ba5
- (id)objectInSlidesAtIndex:(int)index;	// 0x2fba2945
- (id)objectInTextsAtIndex:(int)index;	// 0x2fba2a75
// converted property getter: - (float)opacity;	// 0x2fb9a8a5
// converted property getter: - (id)parentContainer;	// 0x2fb9eb7d
- (id)parentDocument;	// 0x2fba06c9
// declared property getter: - (double)phaseInDuration;	// 0x2fb9b175
// declared property getter: - (double)phaseOutDuration;	// 0x2fb9b405
// converted property getter: - (id)plug;	// 0x2fb9ed0d
- (id)plugID;	// 0x2fba0669
// converted property getter: - (CGPoint)position;	// 0x2fb9aa9d
// declared property getter: - (id)presetID;	// 0x2fb9a6ad
// converted property getter: - (int)randomSeed;	// 0x2fb9eb8d
- (void)reconfigureSlides;	// 0x2fb9f855
- (void)removeAllFilters;	// 0x2fb9e5f5
- (void)removeAllSecondarySlides;	// 0x2fb9d499
- (void)removeAllSlides;	// 0x2fb9c98d
- (void)removeAllTexts;	// 0x2fb9dedd
- (void)removeAnimationPathForKey:(id)key;	// 0x2fb9e95d
- (void)removeFiltersAtIndices:(id)indices;	// 0x2fb9e461
- (void)removeObjectFromFiltersAtIndex:(int)index;	// 0x2fba2c05
- (void)removeObjectFromSlidesAtIndex:(int)index;	// 0x2fba29a5
- (void)removeObjectFromTextsAtIndex:(int)index;	// 0x2fba2ad5
- (void)removeSecondarySlidesAtIndices:(id)indices;	// 0x2fb9d25d
- (void)removeSlidesAtIndices:(id)indices;	// 0x2fb9c4f1
- (void)removeTextsAtIndices:(id)indices;	// 0x2fb9dd79
- (void)replaceObjectInFiltersAtIndex:(int)index withObject:(id)object;	// 0x2fba2c41
- (void)replaceObjectInSlidesAtIndex:(int)index withObject:(id)object;	// 0x2fba29e1
- (void)replaceObjectInTextsAtIndex:(int)index withObject:(id)object;	// 0x2fba2b11
- (void)replaceSlide:(id)slide atIndex:(int)index;	// 0x2fb9cbf9
- (void)replaceSlideAtIndex:(int)index withSlide:(id)slide;	// 0x2fb9ca31
// declared property getter: - (BOOL)replaceSlides;	// 0x2fb9d595
- (void)replaceTextsWitStrings:(id)strings;	// 0x2fb9ee81
// converted property getter: - (float)rotationAngle;	// 0x2fb9acb5
// converted property getter: - (float)scale;	// 0x2fb9a9a1
- (void)scaleMainDuration;	// 0x2fba2191
// converted property getter: - (id)scriptingAnimations;	// 0x2fba2e55
// converted property getter: - (id)secondarySlides;	// 0x2fb9cd09
- (void)setAnimationPath:(id)path forKey:(id)key;	// 0x2fb9e7c9
// converted property setter: - (void)setAudioPlaylist:(id)playlist;	// 0x2fb9ea15
// converted property setter: - (void)setAudioPriority:(int)priority;	// 0x2fb9eb59
// converted property setter: - (void)setContainer:(id)container;	// 0x2fba1691
- (void)setEffectAttribute:(id)attribute forKey:(id)key;	// 0x2fb9a809
// converted property setter: - (void)setEffectAttributes:(id)attributes;	// 0x2fb9a785
// declared property setter: - (void)setEffectID:(id)anId;	// 0x2fb9a555
// converted property setter: - (void)setFullDuration:(double)duration;	// 0x2fb9b109
// converted property setter: - (void)setHeight:(float)height;	// 0x2fba2db9
// converted property setter: - (void)setLiveIndex:(int)index;	// 0x2fb9eced
// declared property setter: - (void)setMainDuration:(double)duration;	// 0x2fb9b6a9
// converted property setter: - (void)setOpacity:(float)opacity;	// 0x2fb9a8b5
// converted property setter: - (void)setParentContainer:(id)container;	// 0x2fba1f19
// declared property setter: - (void)setPhaseInDuration:(double)duration;	// 0x2fb9b18d
// declared property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x2fb9b41d
// converted property setter: - (void)setPlug:(id)plug;	// 0x2fba10e5
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x2fb9aab5
// declared property setter: - (void)setPresetID:(id)anId;	// 0x2fb9a6d1
// converted property setter: - (void)setRandomSeed:(int)seed;	// 0x2fb9eb9d
// declared property setter: - (void)setReplaceSlides:(BOOL)slides;	// 0x2fb9d5a5
// converted property setter: - (void)setRotationAngle:(float)angle;	// 0x2fb9acc5
// converted property setter: - (void)setScale:(float)scale;	// 0x2fb9a9b1
// converted property setter: - (void)setScriptingAnimations:(id)animations;	// 0x2fba31c1
// converted property setter: - (void)setSize:(CGSize)size;	// 0x2fb9adc1
- (void)setSkipEffectTiming:(BOOL)timing;	// 0x2fb9ffa1
// converted property setter: - (void)setWidth:(float)width;	// 0x2fba2e21
// converted property setter: - (void)setXPosition:(float)position;	// 0x2fba2ce9
// converted property setter: - (void)setXRotationAngle:(float)angle;	// 0x2fb9aed1
// converted property setter: - (void)setYPosition:(float)position;	// 0x2fba2d51
// converted property setter: - (void)setYRotationAngle:(float)angle;	// 0x2fb9afc5
// converted property setter: - (void)setZPosition:(float)position;	// 0x2fb9abd1
// converted property getter: - (CGSize)size;	// 0x2fb9ada9
- (id)slideForMCSlide:(id)mcslide;	// 0x2fba2719
- (id)slideInformationWithDocument:(id)document;	// 0x2fba0259
// declared property getter: - (id)slides;	// 0x2fb9b999
// converted property getter: - (BOOL)supportsEffectTiming;	// 0x2fba0249
- (BOOL)supportsUnlimitedSlides;	// 0x2fb9d53d
// declared property getter: - (id)texts;	// 0x2fb9d919
- (void)updateEffectAttributes;	// 0x2fba05c9
- (void)updateTiming;	// 0x2fb9ffb1
// converted property getter: - (id)uuid;	// 0x2fba06b9
- (id)videoPaths;	// 0x2fb9fdf9
// converted property getter: - (float)width;	// 0x2fba2ded
// converted property getter: - (float)xPosition;	// 0x2fba2cb5
// converted property getter: - (float)xRotationAngle;	// 0x2fb9aec1
// converted property getter: - (float)yPosition;	// 0x2fba2d1d
// converted property getter: - (float)yRotationAngle;	// 0x2fb9afb5
- (int)zIndex;	// 0x2fb9b925
// converted property getter: - (float)zPosition;	// 0x2fb9abc1
@end
