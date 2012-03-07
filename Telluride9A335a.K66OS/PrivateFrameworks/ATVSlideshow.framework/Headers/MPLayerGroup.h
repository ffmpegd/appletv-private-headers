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
#import "MPLayerableSupportInternal.h"
#import "MPAudioSupport.h"
#import "MPActionableSupport.h"
#import "MPGeometrySupport.h"
#import "MPActionableSupportInternal.h"
#import "MPLayerableSupport.h"
#import <NSObject.h> // Unknown library
#import "MPTimingSupport.h"
#import "MPNavigatorSupportInternal.h"
#import "MPNavigatorSupport.h"
#import "MPAutomaticLayerSupport.h"
#import "MPManualLayerSupport.h"

@class MCPlugParallel, NSArray, MPLayerGroupInternal, NSMutableDictionary, NSMutableArray, MPAudioPlaylist, MCContainerParallelizer;

@interface MPLayerGroup : NSObject <MPActionableSupportInternal, MPNavigatorSupportInternal, MPLayerableSupportInternal, NSCoding, NSCopying, MPAnimationSupport, MPActionableSupport, MPAudioSupport, MPLayerableSupport, MPNavigatorSupport, MPGeometrySupport, MPTimingSupport, MPActionSupport, MPAutomaticLayerSupport, MPManualLayerSupport> {
	MPLayerGroupInternal *_internal;	// 4 = 0x4
	NSMutableArray *_userProvidedVideoPaths;	// 8 = 0x8
	NSMutableArray *_userProvidedAudioPaths;	// 12 = 0xc
	MCPlugParallel *_plug;	// 16 = 0x10
	MCContainerParallelizer *_parallelizer;	// 20 = 0x14
	MPAudioPlaylist *_audioPlaylist;	// 24 = 0x18
	NSMutableArray *_layers;	// 28 = 0x1c
	NSMutableDictionary *_layerDictionary;	// 32 = 0x20
	id _parent;	// 36 = 0x24
	NSMutableDictionary *_authoringOptions;	// 40 = 0x28
	NSMutableDictionary *_animationPaths;	// 44 = 0x2c
	NSMutableDictionary *_actions;	// 48 = 0x30
}
@property(readonly, retain) NSMutableDictionary *actions;	// G=0x31abd0c5; converted property
@property(readonly, retain) NSMutableDictionary *animationPaths;	// G=0x31abc369; converted property
@property(copy) NSArray *audioPaths;	// G=0x31abb53d; S=0x31abb54d; @dynamic
@property(retain) MPAudioPlaylist *audioPlaylist;	// G=0x31aba275; S=0x31aba285; converted property
@property(retain) id authoredVersionInfo;	// G=0x31ac0765; S=0x31ac0785; converted property
@property(retain) NSMutableDictionary *authoringOptions;	// G=0x31ab8cbd; S=0x31ab8e79; converted property
@property(assign) BOOL autoAdjustDuration;	// G=0x31abbca1; S=0x31abbcc5; @dynamic
@property(assign) CGColorRef backgroundCGColor;	// G=0x31aba7ad; S=0x31aba809; @dynamic
@property(assign) double duration;	// G=0x31ab9e05; S=0x31ab9ead; converted property
@property(assign) double durationPadding;	// G=0x31abf6ad; S=0x31abf6cd; converted property
@property(assign) BOOL isTriggered;	// G=0x31aba0d5; S=0x31aba0f9; converted property
@property(assign) int lastSlideUsed;	// G=0x31ac18e9; S=0x31ac1855; converted property
@property(readonly, retain) NSMutableArray *layers;	// G=0x31ab90b9; converted property
@property(assign) int loopingMode;	// G=0x31aba6a1; S=0x31aba6c1; @dynamic
@property(assign) double numberOfLoops;	// G=0x31abb6f5; S=0x31abb715; converted property
@property(assign) float opacity;	// G=0x31abc6a5; S=0x31abc6c5; converted property
@property(retain) id parent;	// G=0x31aba265; S=0x31abddf9; converted property
@property(assign) double phaseInDuration;	// G=0x31abb8fd; S=0x31abb91d; converted property
@property(assign) double phaseOutDuration;	// G=0x31abbac5; S=0x31abbae5; converted property
@property(retain) MCPlugParallel *plug;	// G=0x31abd361; S=0x31abe419; converted property
@property(assign) CGPoint position;	// G=0x31abc7b5; S=0x31abc7e5; converted property
@property(assign) float rotationAngle;	// G=0x31abca01; S=0x31abca21; converted property
@property(assign) float scale;	// G=0x31abce6d; S=0x31abce8d; converted property
@property(assign) CGSize size;	// G=0x31abcb11; S=0x31abcb41; converted property
@property(assign) BOOL startsPaused;	// G=0x31aba19d; S=0x31aba1c1; converted property
@property(assign) double timeIn;	// G=0x31ab9ff9; S=0x31aba019; converted property
@property(copy) NSArray *videoPaths;	// G=0x31abb2c9; S=0x31abb3b9; @dynamic
@property(assign) float xRotationAngle;	// G=0x31abcc4d; S=0x31abcc6d; converted property
@property(assign) float yRotationAngle;	// G=0x31abcd5d; S=0x31abcd7d; converted property
@property(assign) int zIndex;	// G=0x31abcf7d; S=0x31abcff9; converted property
@property(assign) float zPosition;	// G=0x31abc8f1; S=0x31abc911; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x31ab672d
- (id)init;	// 0x31ab67b5
- (id)initWithCoder:(id)coder;	// 0x31ab759d
- (id)absoluteVideoPaths;	// 0x31abda59
- (id)actionForKey:(id)key;	// 0x31abd0d5
- (id)actionableObjectForID:(id)anId;	// 0x31ac1955
// converted property getter: - (id)actions;	// 0x31abd0c5
- (void)addAudioPath:(id)path;	// 0x31abaf65
- (void)addAudioPaths:(id)paths;	// 0x31abb041
- (void)addLayer:(id)layer;	// 0x31ab90c9
- (void)addLayers:(id)layers;	// 0x31ab9125
- (void)addVideoPath:(id)path;	// 0x31abac95
- (void)addVideoPaths:(id)paths;	// 0x31abadd1
- (id)allEffectContainers;	// 0x31abd371
- (id)allEffects;	// 0x31abd449
- (id)allSlides:(BOOL)slides;	// 0x31abd529
- (id)allSongs;	// 0x31abd6c1
- (id)animationPathForKey:(id)key;	// 0x31abc379
// converted property getter: - (id)animationPaths;	// 0x31abc369
// declared property getter: - (id)audioPaths;	// 0x31abb53d
// converted property getter: - (id)audioPlaylist;	// 0x31aba275
// converted property getter: - (id)authoredVersionInfo;	// 0x31ac0765
- (id)authoringOptionForKey:(id)key;	// 0x31ab8e59
// converted property getter: - (id)authoringOptions;	// 0x31ab8cbd
// declared property getter: - (BOOL)autoAdjustDuration;	// 0x31abbca1
// declared property getter: - (CGColorRef)backgroundCGColor;	// 0x31aba7ad
- (void)cachePaths;	// 0x31abdca1
- (void)cleanup;	// 0x31abefc9
- (void)configureActions;	// 0x31abdee5
- (void)copyActions:(id)actions;	// 0x31ac068d
- (void)copyAnimationPaths:(id)paths;	// 0x31ac05b5
- (void)copyAudioPlaylist:(id)playlist;	// 0x31ac0571
- (void)copyLayerDictionary:(id)dictionary;	// 0x31ac0499
- (void)copyLayers:(id)layers;	// 0x31ac0391
- (void)copyStruct:(id)aStruct;	// 0x31abffa9
- (id)copyWithZone:(NSZone *)zone;	// 0x31ab8479
- (int)countOfLayers;	// 0x31ac1c5d
- (void)dealloc;	// 0x31ab861d
- (BOOL)detectFacesInBackground;	// 0x31ac1c21
// converted property getter: - (double)duration;	// 0x31ab9e05
// converted property getter: - (double)durationPadding;	// 0x31abf6ad
- (void)encodeWithCoder:(id)coder;	// 0x31ab6b8d
- (void)finalize;	// 0x31ab85dd
- (void)insertLayers:(id)layers atIndex:(int)index;	// 0x31ab9165
- (void)insertObject:(id)object inLayersAtIndex:(int)index;	// 0x31ac1d61
// converted property getter: - (BOOL)isTriggered;	// 0x31aba0d5
- (id)keyedLayers;	// 0x31abbdc9
// converted property getter: - (int)lastSlideUsed;	// 0x31ac18e9
- (id)layerForKey:(id)key;	// 0x31abbdd9
- (id)layerKey;	// 0x31abbd51
- (id)layerKeyDictionary;	// 0x31ac1c01
// converted property getter: - (id)layers;	// 0x31ab90b9
- (BOOL)layersCanPositionZIndex;	// 0x31abdc89
// declared property getter: - (int)loopingMode;	// 0x31aba6a1
- (id)mainLayers;	// 0x31abb62d
- (void)moveLayersFromIndices:(id)indices toIndex:(int)index;	// 0x31ab9a69
- (id)navigatorKey;	// 0x31ab8791
- (BOOL)nearingEndWithOptions:(id)options;	// 0x31ac07a5
- (BOOL)needsToRemoveFadeIn;	// 0x31ac1235
// converted property getter: - (double)numberOfLoops;	// 0x31abb6f5
- (id)objectID;	// 0x31abdc49
- (id)objectInLayersAtIndex:(int)index;	// 0x31ac1c7d
- (id)observer;	// 0x31abdd9d
// converted property getter: - (float)opacity;	// 0x31abc6a5
- (id)orderedVideoPaths;	// 0x31abb2d9
// converted property getter: - (id)parent;	// 0x31aba265
- (id)parentDocument;	// 0x31abdbb1
// converted property getter: - (double)phaseInDuration;	// 0x31abb8fd
// converted property getter: - (double)phaseOutDuration;	// 0x31abbac5
// converted property getter: - (id)plug;	// 0x31abd361
- (id)plugID;	// 0x31abdc29
// converted property getter: - (CGPoint)position;	// 0x31abc7b5
- (double)posterTime;	// 0x31abd889
- (void)reconfigureLoopingMode;	// 0x31abf8d1
- (void)reconnectAll;	// 0x31abf745
- (void)removeActionForKey:(id)key;	// 0x31abd29d
- (void)removeAllAudioPaths;	// 0x31abb60d
- (void)removeAllLayers;	// 0x31ab949d
- (void)removeAllVideoPaths;	// 0x31abb5ed
- (void)removeAnimationPathForKey:(id)key;	// 0x31abc5cd
- (double)removeFadeInIfNeeded;	// 0x31ac14f5
- (void)removeLayerForKey:(id)key;	// 0x31abc0a1
- (void)removeLayersAtIndices:(id)indices;	// 0x31ab95a9
- (void)removeObjectFromLayersAtIndex:(int)index;	// 0x31ac1da1
- (void)removePath:(id)path;	// 0x31abb0ed
- (void)removePaths:(id)paths;	// 0x31abb22d
- (void)replaceObjectInLayersAtIndex:(int)index withObject:(id)object;	// 0x31ac1ddd
- (void)resetDuration;	// 0x31abf2ed
// converted property getter: - (float)rotationAngle;	// 0x31abca01
// converted property getter: - (float)scale;	// 0x31abce6d
- (void)setAction:(id)action forKey:(id)key;	// 0x31abd0f5
- (void)setAnimationPath:(id)path forKey:(id)key;	// 0x31abc399
// declared property setter: - (void)setAudioPaths:(id)paths;	// 0x31abb54d
// converted property setter: - (void)setAudioPlaylist:(id)playlist;	// 0x31aba285
// converted property setter: - (void)setAuthoredVersionInfo:(id)info;	// 0x31ac0785
- (void)setAuthoringOption:(id)option forKey:(id)key;	// 0x31ab8ccd
// converted property setter: - (void)setAuthoringOptions:(id)options;	// 0x31ab8e79
// declared property setter: - (void)setAutoAdjustDuration:(BOOL)duration;	// 0x31abbcc5
// declared property setter: - (void)setBackgroundCGColor:(CGColorRef)color;	// 0x31aba809
- (void)setBackgroundColorString:(id)string;	// 0x31aba7cd
- (void)setContainer:(id)container;	// 0x31abe119
// converted property setter: - (void)setDuration:(double)duration;	// 0x31ab9ead
// converted property setter: - (void)setDurationPadding:(double)padding;	// 0x31abf6cd
- (void)setIsDocumentLayerGroup:(BOOL)group;	// 0x31ac1935
// converted property setter: - (void)setIsTriggered:(BOOL)triggered;	// 0x31aba0f9
// converted property setter: - (void)setLastSlideUsed:(int)used;	// 0x31ac1855
- (void)setLayer:(id)layer forKey:(id)key;	// 0x31abbdf9
// declared property setter: - (void)setLoopingMode:(int)mode;	// 0x31aba6c1
// converted property setter: - (void)setNumberOfLoops:(double)loops;	// 0x31abb715
// converted property setter: - (void)setOpacity:(float)opacity;	// 0x31abc6c5
// converted property setter: - (void)setParent:(id)parent;	// 0x31abddf9
// converted property setter: - (void)setPhaseInDuration:(double)duration;	// 0x31abb91d
// converted property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x31abbae5
// converted property setter: - (void)setPlug:(id)plug;	// 0x31abe419
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x31abc7e5
// converted property setter: - (void)setRotationAngle:(float)angle;	// 0x31abca21
// converted property setter: - (void)setScale:(float)scale;	// 0x31abce8d
// converted property setter: - (void)setSize:(CGSize)size;	// 0x31abcb41
// converted property setter: - (void)setStartsPaused:(BOOL)paused;	// 0x31aba1c1
- (unsigned)setStyleID:(id)anId;	// 0x31ab880d
// converted property setter: - (void)setTimeIn:(double)anIn;	// 0x31aba019
// declared property setter: - (void)setVideoPaths:(id)paths;	// 0x31abb3b9
// converted property setter: - (void)setXRotationAngle:(float)angle;	// 0x31abcc6d
// converted property setter: - (void)setYRotationAngle:(float)angle;	// 0x31abcd7d
// converted property setter: - (void)setZIndex:(int)index;	// 0x31abcff9
// converted property setter: - (void)setZPosition:(float)position;	// 0x31abc911
// converted property getter: - (CGSize)size;	// 0x31abcb11
// converted property getter: - (BOOL)startsPaused;	// 0x31aba19d
- (id)styleID;	// 0x31ab87e1
// converted property getter: - (double)timeIn;	// 0x31ab9ff9
- (id)uuid;	// 0x31abdc69
- (id)valueInLayersWithName:(id)name;	// 0x31ac1c9d
- (double)videoDuration;	// 0x31ab9cc1
// declared property getter: - (id)videoPaths;	// 0x31abb2c9
// converted property getter: - (float)xRotationAngle;	// 0x31abcc4d
// converted property getter: - (float)yRotationAngle;	// 0x31abcd5d
// converted property getter: - (int)zIndex;	// 0x31abcf7d
// converted property getter: - (float)zPosition;	// 0x31abc8f1
@end

