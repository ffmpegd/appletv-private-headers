/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "NSCoding.h"
#import "MPLayerableSupportInternal.h"
#import <NSObject.h> // Unknown library

@class MPDocumentInternal, NSMutableDictionary, NSArray, MCMontage;
@protocol MPAssetKeyDelegate;

@interface MPDocument : NSObject <MPLayerableSupportInternal, NSCoding> {
@private
	MCMontage *_montage;	// 4 = 0x4
	NSArray *_userProvidedStacks;	// 8 = 0x8
	NSMutableDictionary *_documentAttributes;	// 12 = 0xc
	NSMutableDictionary *_fileProperties;	// 16 = 0x10
	NSMutableDictionary *_layerGroups;	// 20 = 0x14
	BOOL _preserveMedia;	// 24 = 0x18
	id<MPAssetKeyDelegate> _assetKeyDelegate;	// 28 = 0x1c
	MPDocumentInternal *_internal;	// 32 = 0x20
}
@property(assign) id assetKeyDelegate;	// G=0x32e8b8c9; S=0x32e8b8d9; converted property
@property(retain) id audioPaths;	// G=0x32e8be8d; S=0x32e8bec5; converted property
@property(retain) id audioPlaylist;	// G=0x32e8c599; S=0x32e8c5d1; converted property
@property(assign) CGColorRef backgroundCGColor;	// G=0x32e8c4b5; S=0x32e8c4ed; converted property
@property(readonly, retain) NSMutableDictionary *documentAttributes;	// G=0x32e8c65d; converted property
@property(retain) id documentLayerGroup;	// G=0x32e8e1c1; S=0x32e8db2d; converted property
@property(retain) id fileURL;	// G=0x32e8ba41; S=0x32e8ba61; converted property
@property(retain) id lastRandomTransition;	// G=0x32e8f7dd; S=0x32e8f7fd; converted property
@property(assign) int loopingMode;	// G=0x32e8b7dd; S=0x32e8b815; converted property
@property(retain) id mediaProperties;	// G=0x32e8b339; S=0x32e8b349; converted property
@property(retain) MCMontage *montage;	// G=0x32e8c645; S=0x32e8e52d; converted property
@property(assign) double numberOfLoops;	// G=0x32e8b851; S=0x32e8b889; converted property
@property(assign) BOOL preserveMedia;	// G=0x32e8b319; S=0x32e8b329; converted property
@property(assign) BOOL savesPathsAsAbsolute;	// G=0x32e8b9bd; S=0x32e8b9e1; converted property
@property(retain) id stacks;	// G=0x32e8bd91; S=0x32e8bda1; converted property
@property(retain) id styleID;	// G=0x32e90461; S=0x32e90499; converted property
@property(retain) id title;	// G=0x32e90429; S=0x32e90445; converted property
@property(retain) id undoManager;	// G=0x32e8ba01; S=0x32e8ba21; converted property
@property(retain) id videoPaths;	// G=0x32e8bde1; S=0x32e8be51; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x32e89fa1
+ (void)initialize;	// 0x32e89ed9
+ (BOOL)isNativeType:(id)type;	// 0x32e8a021
+ (id)readableTypes;	// 0x32e89ff9
+ (id)unarchiveDocumentFromData:(id)data error:(id *)error;	// 0x32e89ebd
+ (id)writableTypes;	// 0x32e89fd1
- (id)init;	// 0x32e8a045
- (id)initWithCoder:(id)coder;	// 0x32e8a6b1
- (CGImageRef)CGImageForAssetAtPath:(id)path andSize:(CGSize)size;	// 0x32e90c69
- (IOSurfaceRef)IOSurfaceForAssetAtPath:(id)path andSize:(CGSize)size;	// 0x32e90d99
- (void)_setMediaProperties:(id)properties;	// 0x32e8e56d
- (id)absolutePathForAssetAtPath:(id)path;	// 0x32e904d5
- (id)absolutePathForAssetAtPath:(id)path andSize:(CGSize)size;	// 0x32e907e1
- (id)absolutePathForStillAssetAtPath:(id)path andSize:(CGSize)size;	// 0x32e90bf9
- (id)absoluteVideoPaths;	// 0x32e8e57d
- (id)actionableObjectForID:(id)anId;	// 0x32e8e0a9
- (void)addAudioPath:(id)path;	// 0x32e8bc0d
- (void)addAudioPaths:(id)paths;	// 0x32e8bc49
- (void)addLayer:(id)layer;	// 0x32e8bfdd
- (void)addLayers:(id)layers;	// 0x32e8c049
- (void)addStacks:(id)stacks;	// 0x32e8bc85
- (void)addVideoPath:(id)path;	// 0x32e8bb95
- (void)addVideoPaths:(id)paths;	// 0x32e8bbd1
- (id)allEffectContainers;	// 0x32e8ca9d
- (id)allEffects;	// 0x32e8cad5
- (id)allSlides;	// 0x32e8cb0d
- (id)allSlides:(BOOL)slides;	// 0x32e8cb21
- (id)allSongs;	// 0x32e8cc5d
- (id)altitudeForPath:(id)path;	// 0x32e8ef21
- (int)antialiasLevel;	// 0x32e8cdcd
- (unsigned)applyStyle:(id)style;	// 0x32e8b131
- (id)areaForPath:(id)path;	// 0x32e8ee61
// converted property getter: - (id)assetKeyDelegate;	// 0x32e8b8c9
- (id)attributeForAssetAtPath:(id)path forKey:(id)key;	// 0x32e90f45
// converted property getter: - (id)audioPaths;	// 0x32e8be8d
// converted property getter: - (id)audioPlaylist;	// 0x32e8c599
- (id)authoringOptionForKey:(id)key;	// 0x32e8b761
// converted property getter: - (CGColorRef)backgroundCGColor;	// 0x32e8c4b5
- (void)beginBatchModify;	// 0x32e8ba81
- (id)cachedAbsolutePathFromPath:(id)path;	// 0x32e8fde1
- (id)cachedAbsoluteStillPathFromPath:(id)path;	// 0x32e8ff59
- (id)captionForPath:(id)path;	// 0x32e8ebd1
- (id)cityForPath:(id)path;	// 0x32e8ede1
- (void)cleanup;	// 0x32e8e3fd
- (void)configureActions;	// 0x32e90141
- (int)countOfLayers;	// 0x32e902bd
- (id)countryForPath:(id)path;	// 0x32e8ed21
- (id)creationDateForPath:(id)path;	// 0x32e8eac1
- (id)currentStyle;	// 0x32e8b0f9
- (id)dataForAssetAtPath:(id)path andSize:(CGSize)size;	// 0x32e90d2d
- (void)dealloc;	// 0x32e8afe5
- (id)definedPlaceNameForPath:(id)path;	// 0x32e8eee1
- (id)description;	// 0x32e8aed9
- (id)descriptionForRandomTransitionPresetID:(id)randomTransitionPresetID;	// 0x32e8f7cd
- (BOOL)detectFacesInBackground;	// 0x32e8fd71
- (id)displayName;	// 0x32e8b0ed
- (id)documentAttributeForKey:(id)key;	// 0x32e8b195
// converted property getter: - (id)documentAttributes;	// 0x32e8c65d
// converted property getter: - (id)documentLayerGroup;	// 0x32e8e1c1
- (void)dump;	// 0x32e8c655
- (double)duration;	// 0x32e8c529
- (double)durationForPath:(id)path;	// 0x32e8d955
- (id)elements;	// 0x32e8cf49
- (void)encodeWithCoder:(id)coder;	// 0x32e8a505
- (void)endBatchModify;	// 0x32e8bae1
- (double)fadeOutAudioDuration;	// 0x32e8f81d
// converted property getter: - (id)fileURL;	// 0x32e8ba41
- (void)finalize;	// 0x32e8afa5
- (id)flightPlanFrom:(CGPoint)from to:(CGPoint)to;	// 0x32e8f761
- (id)fullDebugLog;	// 0x32e8c659
- (void)insertLayers:(id)layers atIndex:(int)index;	// 0x32e8c099
- (void)insertObject:(id)object inLayersAtIndex:(int)index;	// 0x32e9036d
- (BOOL)isAudioAtPath:(id)path;	// 0x32e8e6d5
- (BOOL)isImageAtPath:(id)path;	// 0x32e8e631
- (BOOL)isInBatchModify;	// 0x32e90229
- (BOOL)isLive;	// 0x32e8fda5
- (BOOL)isMovieAtPath:(id)path;	// 0x32e8e6d1
- (BOOL)isSupportedMovieForAssetAtPath:(id)path;	// 0x32e90e21
- (id)keyedLayers;	// 0x32e9024d
- (id)keyedLayers;	// 0x32e8c4a5
- (id)keywordsForPath:(id)path;	// 0x32e8eb49
// converted property getter: - (id)lastRandomTransition;	// 0x32e8f7dd
- (CGPoint)latLongPointForMap:(id)map withAttributes:(id)attributes;	// 0x32e8f231
- (id)latitudeForPath:(id)path;	// 0x32e8ec11
- (id)layerForKey:(id)key;	// 0x32e8c281
- (id)layers;	// 0x32e8bfa5
- (BOOL)layersCanPositionZIndex;	// 0x32e9013d
- (id)longitudeForPath:(id)path;	// 0x32e8ec99
// converted property getter: - (int)loopingMode;	// 0x32e8b7dd
- (id)mainLayers;	// 0x32e8c60d
- (int)mapLevelForPath:(id)path;	// 0x32e8f6ad
- (id)marimbaDocument;	// 0x32e90f71
// converted property getter: - (id)mediaProperties;	// 0x32e8b339
- (int)mediaTypeForPath:(id)path;	// 0x32e8da1d
// converted property getter: - (id)montage;	// 0x32e8c645
- (void)moveLayersFromIndices:(id)indices toIndex:(int)index;	// 0x32e8c241
- (BOOL)nearingEndWithOptions:(id)options;	// 0x32e8fd21
- (BOOL)needsToRemoveFadeIn;	// 0x32e90289
- (id)neighborhoodForPath:(id)path;	// 0x32e8eea1
// converted property getter: - (double)numberOfLoops;	// 0x32e8b851
- (id)objectInLayersAtIndex:(int)index;	// 0x32e902f5
- (id)oceanForPath:(id)path;	// 0x32e8ed61
- (id)orderedVideoPaths;	// 0x32e8be19
- (void)organizeRandomTransitions;	// 0x32e8f85d
- (id)organizedRandomTransitions;	// 0x32e8fcd9
- (id)outroEffect;	// 0x32e8c901
- (id)placeForPath:(id)path;	// 0x32e8ee21
- (CGPoint)pointForMap:(id)map withAttributes:(id)attributes;	// 0x32e8f311
- (double)posterTime;	// 0x32e8cd95
// converted property getter: - (BOOL)preserveMedia;	// 0x32e8b319
- (id)propertiesForMediaPath:(id)mediaPath;	// 0x32e8b3e5
- (BOOL)readFromPath:(id)path ofType:(id)type error:(id *)error;	// 0x32e8afa1
- (void)reconnectAllTransitions;	// 0x32e8ce1d
- (id)regionsOfInterestForPath:(id)path;	// 0x32e8e775
- (id)regionsOfInterestForPath:(id)path detect:(BOOL)detect;	// 0x32e8e789
- (void)removeAllAudioPaths;	// 0x32e8bf39
- (void)removeAllLayers;	// 0x32e8c0d9
- (void)removeAllStacks;	// 0x32e8bf71
- (void)removeAllVideoPaths;	// 0x32e8bf01
- (double)removeFadeInIfNeeded;	// 0x32e90251
- (void)removeLayerForKey:(id)key;	// 0x32e8c3c1
- (void)removeLayersAtIndices:(id)indices;	// 0x32e8c205
- (void)removeObjectFromLayersAtIndex:(int)index;	// 0x32e903ad
- (void)removePath:(id)path;	// 0x32e8bd19
- (void)removePaths:(id)paths;	// 0x32e8bd55
- (void)removePropertiesForMediaPath:(id)mediaPath;	// 0x32e8b6e1
- (void)replaceObjectInLayersAtIndex:(int)index withObject:(id)object;	// 0x32e903e9
- (CGSize)resolutionForAssetAtPath:(id)path;	// 0x32e90e25
- (CGSize)resolutionForPath:(id)path;	// 0x32e8d3ed
// converted property getter: - (BOOL)savesPathsAsAbsolute;	// 0x32e8b9bd
- (void)setAbsolutePath:(id)path forKey:(id)key;	// 0x32e8fe89
- (void)setAbsoluteStillPath:(id)path forKey:(id)key;	// 0x32e90001
// converted property setter: - (void)setAssetKeyDelegate:(id)delegate;	// 0x32e8b8d9
- (void)setAudioFadeOutDuration:(double)duration;	// 0x32e8f83d
// converted property setter: - (void)setAudioPaths:(id)paths;	// 0x32e8bec5
// converted property setter: - (void)setAudioPlaylist:(id)playlist;	// 0x32e8c5d1
- (void)setAuthoringOption:(id)option forKey:(id)key;	// 0x32e8b79d
// converted property setter: - (void)setBackgroundCGColor:(CGColorRef)color;	// 0x32e8c4ed
- (void)setDocumentAttribute:(id)attribute forKey:(id)key;	// 0x32e8b245
// converted property setter: - (void)setDocumentLayerGroup:(id)group;	// 0x32e8db2d
// converted property setter: - (void)setFileURL:(id)url;	// 0x32e8ba61
// converted property setter: - (void)setLastRandomTransition:(id)transition;	// 0x32e8f7fd
- (void)setLayer:(id)layer forKey:(id)key;	// 0x32e8c2a1
// converted property setter: - (void)setLoopingMode:(int)mode;	// 0x32e8b815
// converted property setter: - (void)setMediaProperties:(id)properties;	// 0x32e8b349
// converted property setter: - (void)setMontage:(id)montage;	// 0x32e8e52d
// converted property setter: - (void)setNumberOfLoops:(double)loops;	// 0x32e8b889
// converted property setter: - (void)setPreserveMedia:(BOOL)media;	// 0x32e8b329
- (void)setProperties:(id)properties forMediaPath:(id)mediaPath;	// 0x32e8b469
// converted property setter: - (void)setSavesPathsAsAbsolute:(BOOL)absolute;	// 0x32e8b9e1
// converted property setter: - (void)setStacks:(id)stacks;	// 0x32e8bda1
// converted property setter: - (void)setStyleID:(id)anId;	// 0x32e90499
- (void)setTemporarilyCacheAbsolutePaths:(BOOL)paths;	// 0x32e900d1
// converted property setter: - (void)setTitle:(id)title;	// 0x32e90445
// converted property setter: - (void)setUndoManager:(id)manager;	// 0x32e8ba21
// converted property setter: - (void)setVideoPaths:(id)paths;	// 0x32e8be51
- (void)setupDocumentLayerGroup;	// 0x32e8dd9d
- (void)setupLayerGroups;	// 0x32e8dfb9
// converted property getter: - (id)stacks;	// 0x32e8bd91
- (double)startTimeForAssetAtPath:(id)path;	// 0x32e90f49
- (double)startTimeForPath:(id)path;	// 0x32e8d7c5
- (id)stateForPath:(id)path;	// 0x32e8eda1
- (double)stopTimeForAssetAtPath:(id)path;	// 0x32e90f5d
- (double)stopTimeForPath:(id)path;	// 0x32e8d88d
// converted property getter: - (id)styleID;	// 0x32e90461
- (id)tiledMapPathsForAttributes:(id)attributes;	// 0x32e8efa9
// converted property getter: - (id)title;	// 0x32e90429
- (id)titleEffect;	// 0x32e8c66d
// converted property getter: - (id)undoManager;	// 0x32e8ba01
- (void)upgradeDocument;	// 0x32e8e1e1
- (id)uuid;	// 0x32e8cf29
- (id)valueInLayersWithName:(id)name;	// 0x32e90331
- (double)videoDuration;	// 0x32e8c561
// converted property getter: - (id)videoPaths;	// 0x32e8bde1
- (float)volumeForPath:(id)path;	// 0x32e8e5b5
@end
