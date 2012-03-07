/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import "MPActionSupport.h"
#import "MPAnimationSupport.h"
#import "ATVSlideshow-Structs.h"
#import "MPFilterSupport.h"
#import "MPAudioSupport.h"
#import "MPActionableSupport.h"
#import "MPGeometrySupport.h"
#import "MPActionableSupportInternal.h"
#import "MPLayerableSupport.h"
#import <NSObject.h> // Unknown library
#import "MPTimingSupport.h"

@class MCMontage, MCPlugParallel, NSString, NSMutableDictionary, MPLayerInternal, NSMutableArray, MPAudioPlaylist;

@interface MPLayer : NSObject <MPActionableSupportInternal, NSCoding, NSCopying, MPFilterSupport, MPAnimationSupport, MPAudioSupport, MPActionableSupport, MPLayerableSupport, MPGeometrySupport, MPTimingSupport, MPActionSupport> {
@private
	MCPlugParallel *_plug;	// 4 = 0x4
	NSMutableDictionary *_attributes;	// 8 = 0x8
	NSMutableArray *_effectContainers;	// 12 = 0xc
	NSMutableArray *_filters;	// 16 = 0x10
	NSMutableDictionary *_animationPaths;	// 20 = 0x14
	NSMutableDictionary *_actions;	// 24 = 0x18
	MPAudioPlaylist *_audioPlaylist;	// 28 = 0x1c
	MCMontage *_montage;	// 32 = 0x20
	id _parent;	// 36 = 0x24
	MPLayerInternal *_internal;	// 40 = 0x28
	BOOL _skipTimeCalculations;	// 44 = 0x2c
}
@property(readonly, retain) NSMutableDictionary *actions;	// G=0x31aad249; converted property
@property(readonly, retain) NSMutableDictionary *animationPaths;	// G=0x31aabe41; converted property
@property(retain) MPAudioPlaylist *audioPlaylist;	// G=0x31aacebd; S=0x31aacecd; converted property
@property(assign) int audioPriority;	// G=0x31aaced1; S=0x31aacef1; @dynamic
@property(assign) double duration;	// G=0x31aac9d5; S=0x31aac9f5; converted property
@property(readonly, retain) NSMutableArray *effectContainers;	// G=0x31aab6e1; converted property
@property(readonly, retain) NSMutableArray *filters;	// G=0x31aab7f9; converted property
@property(assign) float height;	// G=0x31aaf839; S=0x31aaf87d; converted property
@property(assign) BOOL isAudioLayer;	// G=0x31aad0a5; S=0x31aad0c9; @dynamic
@property(assign) BOOL isTriggered;	// G=0x31aacce9; S=0x31aacd0d; converted property
@property(copy) NSString *layerID;	// G=0x31aad1b1; S=0x31aad191; @dynamic
@property(retain) MCMontage *montage;	// G=0x31aad4f9; S=0x31aaeeb9; converted property
@property(assign) double numberOfLoops;	// G=0x31aacf95; S=0x31aacfb5; converted property
@property(assign) float opacity;	// G=0x31aac125; S=0x31aac145; converted property
@property(retain) id parent;	// G=0x31aac8e9; S=0x31aaee09; converted property
@property(assign) double phaseInDuration;	// G=0x31aacb09; S=0x31aacb29; converted property
@property(assign) double phaseOutDuration;	// G=0x31aacbf9; S=0x31aacc19; converted property
@property(retain) MCPlugParallel *plug;	// G=0x31aad4e9; S=0x31aae66d; converted property
@property(assign) CGPoint position;	// G=0x31aac2b5; S=0x31aac2e5; converted property
@property(assign) float rotationAngle;	// G=0x31aac47d; S=0x31aac49d; converted property
@property(assign) float scale;	// G=0x31aac1ed; S=0x31aac20d; converted property
@property(retain) id scriptingAnimations;	// G=0x31aaf929; S=0x31aafc8d; converted property
@property(assign) CGSize size;	// G=0x31aac545; S=0x31aac575; converted property
@property(assign) BOOL skipTimeCalculations;	// G=0x31aaef01; S=0x31aaef11; converted property
@property(assign) BOOL startsPaused;	// G=0x31aacdf5; S=0x31aace19; converted property
@property(assign) double timeIn;	// G=0x31aac8f9; S=0x31aac919; converted property
@property(copy) NSString *title;	// G=0x31aab635; S=0x31aab655; @dynamic
@property(assign) float width;	// G=0x31aaf8b1; S=0x31aaf8f5; converted property
@property(assign) float xPosition;	// G=0x31aaf749; S=0x31aaf78d; converted property
@property(assign) float xRotationAngle;	// G=0x31aac645; S=0x31aac665; converted property
@property(assign) float yPosition;	// G=0x31aaf7c1; S=0x31aaf805; converted property
@property(assign) float yRotationAngle;	// G=0x31aac70d; S=0x31aac72d; converted property
@property(assign) int zIndex;	// G=0x31aac7d5; S=0x31aac81d; converted property
@property(assign) float zPosition;	// G=0x31aac3b5; S=0x31aac3d5; converted property
+ (id)animatedLayer;	// 0x31aa94d9
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x31aa9421
+ (id)effectLayer;	// 0x31aa951d
+ (id)layer;	// 0x31aa9451
+ (id)sequentialLayer;	// 0x31aa9495
- (id)init;	// 0x31aa9561
- (id)initWithCoder:(id)coder;	// 0x31aaa679
- (id)action;	// 0x31aadd21
- (id)actionForKey:(id)key;	// 0x31aad259
// converted property getter: - (id)actions;	// 0x31aad249
- (void)addEffectContainer:(id)container;	// 0x31aab6f1
- (void)addEffectContainers:(id)containers;	// 0x31aab74d
- (void)addFilter:(id)filter;	// 0x31aab809
- (void)addFilters:(id)filters;	// 0x31aab865
- (id)allSlides:(BOOL)slides;	// 0x31aad509
- (id)allSongs;	// 0x31aad8b9
- (id)animationPathForKey:(id)key;	// 0x31aabe51
// converted property getter: - (id)animationPaths;	// 0x31aabe41
// converted property getter: - (id)audioPlaylist;	// 0x31aacebd
// declared property getter: - (int)audioPriority;	// 0x31aaced1
- (void)cleanup;	// 0x31aae54d
- (void)configureActions;	// 0x31aaf3f9
- (void)copyActions:(id)actions;	// 0x31aae431
- (void)copyAnimationPaths:(id)paths;	// 0x31aae359
- (void)copyAudioPlaylist:(id)playlist;	// 0x31aae509
- (void)copyEffectContainers:(id)containers;	// 0x31aae16d
- (void)copyFilters:(id)filters;	// 0x31aae261
- (void)copyStruct:(id)aStruct;	// 0x31aaddad
- (id)copyWithZone:(NSZone *)zone;	// 0x31aab3e9
- (int)countOfEffectContainers;	// 0x31aaf4e9
- (int)countOfFilters;	// 0x31aaf619
- (void)dealloc;	// 0x31aab519
- (id)description;	// 0x31aa9901
- (void)dump;	// 0x31aada61
// converted property getter: - (double)duration;	// 0x31aac9d5
// converted property getter: - (id)effectContainers;	// 0x31aab6e1
- (void)encodeWithCoder:(id)coder;	// 0x31aa9a29
// converted property getter: - (id)filters;	// 0x31aab7f9
- (void)finalize;	// 0x31aab4ed
- (id)fullDebugLog;	// 0x31aada89
// converted property getter: - (float)height;	// 0x31aaf839
- (void)insertEffectContainers:(id)containers atIndex:(int)index;	// 0x31aab78d
- (void)insertFilters:(id)filters atIndex:(int)index;	// 0x31aab8a5
- (void)insertObject:(id)object inEffectContainersAtIndex:(int)index;	// 0x31aaf529
- (void)insertObject:(id)object inFiltersAtIndex:(int)index;	// 0x31aaf659
// declared property getter: - (BOOL)isAudioLayer;	// 0x31aad0a5
// converted property getter: - (BOOL)isTriggered;	// 0x31aacce9
// declared property getter: - (id)layerID;	// 0x31aad1b1
- (id)layerKey;	// 0x31aad1d1
// converted property getter: - (id)montage;	// 0x31aad4f9
- (void)moveEffectContainersFromIndices:(id)indices toIndex:(int)index;	// 0x31aab7f5
- (void)moveFiltersFromIndices:(id)indices toIndex:(int)index;	// 0x31aabd69
// converted property getter: - (double)numberOfLoops;	// 0x31aacf95
- (id)objectID;	// 0x31aadd6d
- (id)objectInEffectContainersAtIndex:(int)index;	// 0x31aaf509
- (id)objectInFiltersAtIndex:(int)index;	// 0x31aaf639
// converted property getter: - (float)opacity;	// 0x31aac125
// converted property getter: - (id)parent;	// 0x31aac8e9
- (id)parentDocument;	// 0x31aadca9
// converted property getter: - (double)phaseInDuration;	// 0x31aacb09
// converted property getter: - (double)phaseOutDuration;	// 0x31aacbf9
// converted property getter: - (id)plug;	// 0x31aad4e9
- (id)plugID;	// 0x31aadd4d
// converted property getter: - (CGPoint)position;	// 0x31aac2b5
- (void)reconnectAllTransitions;	// 0x31aaf231
- (void)reconnectTransitionForEffectContainerAtIndex:(int)index;	// 0x31aaf119
- (void)removeActionForKey:(id)key;	// 0x31aad425
- (void)removeAllEffectContainers;	// 0x31aab795
- (void)removeAllFilters;	// 0x31aabd09
- (void)removeAnimationPathForKey:(id)key;	// 0x31aac04d
- (void)removeEffectContainersAtIndices:(id)indices;	// 0x31aab791
- (void)removeFiltersAtIndices:(id)indices;	// 0x31aabb51
- (void)removeObjectFromEffectContainersAtIndex:(int)index;	// 0x31aaf569
- (void)removeObjectFromFiltersAtIndex:(int)index;	// 0x31aaf699
- (void)replaceObjectInEffectContainersAtIndex:(int)index withObject:(id)object;	// 0x31aaf5a5
- (void)replaceObjectInFiltersAtIndex:(int)index withObject:(id)object;	// 0x31aaf6d5
- (void)resetStartTimes;	// 0x31aaf2f1
// converted property getter: - (float)rotationAngle;	// 0x31aac47d
// converted property getter: - (float)scale;	// 0x31aac1ed
// converted property getter: - (id)scriptingAnimations;	// 0x31aaf929
- (void)setAction:(id)action forKey:(id)key;	// 0x31aad279
- (void)setAnimationPath:(id)path forKey:(id)key;	// 0x31aabe71
// converted property setter: - (void)setAudioPlaylist:(id)playlist;	// 0x31aacecd
// declared property setter: - (void)setAudioPriority:(int)priority;	// 0x31aacef1
// converted property setter: - (void)setDuration:(double)duration;	// 0x31aac9f5
// converted property setter: - (void)setHeight:(float)height;	// 0x31aaf87d
// declared property setter: - (void)setIsAudioLayer:(BOOL)layer;	// 0x31aad0c9
// converted property setter: - (void)setIsTriggered:(BOOL)triggered;	// 0x31aacd0d
// declared property setter: - (void)setLayerID:(id)anId;	// 0x31aad191
// converted property setter: - (void)setMontage:(id)montage;	// 0x31aaeeb9
// converted property setter: - (void)setNumberOfLoops:(double)loops;	// 0x31aacfb5
// converted property setter: - (void)setOpacity:(float)opacity;	// 0x31aac145
// converted property setter: - (void)setParent:(id)parent;	// 0x31aaee09
// converted property setter: - (void)setPhaseInDuration:(double)duration;	// 0x31aacb29
// converted property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x31aacc19
// converted property setter: - (void)setPlug:(id)plug;	// 0x31aae66d
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x31aac2e5
// converted property setter: - (void)setRotationAngle:(float)angle;	// 0x31aac49d
// converted property setter: - (void)setScale:(float)scale;	// 0x31aac20d
// converted property setter: - (void)setScriptingAnimations:(id)animations;	// 0x31aafc8d
// converted property setter: - (void)setSize:(CGSize)size;	// 0x31aac575
// converted property setter: - (void)setSkipTimeCalculations:(BOOL)calculations;	// 0x31aaef11
// converted property setter: - (void)setStartsPaused:(BOOL)paused;	// 0x31aace19
// converted property setter: - (void)setTimeIn:(double)anIn;	// 0x31aac919
// declared property setter: - (void)setTitle:(id)title;	// 0x31aab655
// converted property setter: - (void)setWidth:(float)width;	// 0x31aaf8f5
// converted property setter: - (void)setXPosition:(float)position;	// 0x31aaf78d
// converted property setter: - (void)setXRotationAngle:(float)angle;	// 0x31aac665
// converted property setter: - (void)setYPosition:(float)position;	// 0x31aaf805
// converted property setter: - (void)setYRotationAngle:(float)angle;	// 0x31aac72d
// converted property setter: - (void)setZIndex:(int)index;	// 0x31aac81d
// converted property setter: - (void)setZPosition:(float)position;	// 0x31aac3d5
// converted property getter: - (CGSize)size;	// 0x31aac545
// converted property getter: - (BOOL)skipTimeCalculations;	// 0x31aaef01
// converted property getter: - (BOOL)startsPaused;	// 0x31aacdf5
// converted property getter: - (double)timeIn;	// 0x31aac8f9
// declared property getter: - (id)title;	// 0x31aab635
- (void)updateDurationPadding:(double)padding;	// 0x31aaef65
- (void)updateMainDuration;	// 0x31aaf051
- (id)uuid;	// 0x31aadd8d
// converted property getter: - (float)width;	// 0x31aaf8b1
// converted property getter: - (float)xPosition;	// 0x31aaf749
// converted property getter: - (float)xRotationAngle;	// 0x31aac645
// converted property getter: - (float)yPosition;	// 0x31aaf7c1
// converted property getter: - (float)yRotationAngle;	// 0x31aac70d
// converted property getter: - (int)zIndex;	// 0x31aac7d5
// converted property getter: - (float)zPosition;	// 0x31aac3b5
@end

