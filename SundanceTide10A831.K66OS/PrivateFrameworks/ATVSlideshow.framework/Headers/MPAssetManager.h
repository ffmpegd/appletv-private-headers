/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library


@interface MPAssetManager : NSObject {
}
+ (void)cleanFaceCore;	// 0x338fc0c9
+ (void)cleanFaceCore;	// 0x338fc48d
+ (char *)convertCGImageToBuffer:(CGImageRef)buffer;	// 0x338fc551
+ (char *)convertCGImageToBufferUsingDataProvider:(CGImageRef)bufferUsingDataProvider;	// 0x338fc7bd
+ (char *)convertCGImageToBufferUsingRGBDevice:(CGImageRef)bufferUsingRGBDevice;	// 0x338fc6c5
+ (FaceCoreAPI *)faceCoreAPI;	// 0x338fc18d
+ (void)releaseSharedManager;	// 0x338fb4b1
+ (id)sharedManager;	// 0x338fb3c1
- (id)init;	// 0x338fb5c9
- (id)absolutePathFromPath:(id)path;	// 0x338fc055
- (void)addROIInfo:(id)info forAssetAtPath:(id)path saveToCache:(BOOL)cache;	// 0x338fc09d
- (void)addRegionOfInterest:(CGRect)interest forAssetAtPath:(id)path saveToCache:(BOOL)cache;	// 0x338fc0a1
- (id)altitudeForAssetAtPath:(id)path;	// 0x338fb699
- (void)cacheAttributes:(id)attributes forPath:(id)path;	// 0x338fc0c5
- (id)creationDateForAssetAtPath:(id)path;	// 0x338fb689
- (void)dealloc;	// 0x338fb5f5
- (double)durationForAssetAtPath:(id)path;	// 0x338fb629
- (void)gatherMetadataForAssetAtPath:(id)path;	// 0x338fb625
- (BOOL)isAssetAtPathASupportedAudio:(id)pathASupportedAudio;	// 0x338fb6a9
- (BOOL)isAssetAtPathASupportedImage:(id)pathASupportedImage;	// 0x338fb6a1
- (BOOL)isAssetAtPathASupportedMovie:(id)pathASupportedMovie;	// 0x338fb6a5
- (id)keywordsForAssetAtPath:(id)path;	// 0x338fb68d
- (id)latitudeForAssetAtPath:(id)path;	// 0x338fb691
- (id)locationHierarchyForAssetAtPath:(id)path;	// 0x338fb69d
- (id)longitudeForAssetAtPath:(id)path;	// 0x338fb695
- (unsigned)mediaTypeForAssetAtPath:(id)path;	// 0x338fb6ad
- (void)moveRegionOfInterestWithPath:(id)path fromIndex:(int)index toIndex:(int)index3 saveToCache:(BOOL)cache;	// 0x338fc0b5
- (double)posterTimeForAssetAtPath:(id)path;	// 0x338fc059
- (id)prepareInfoForAssetsAtPaths:(id)paths;	// 0x338fc0c1
- (CGRect)regionOfInterestAtIndex:(int)index forAssetAtPath:(id)path;	// 0x338fc079
- (id)regionsOfInterestForAsset:(CGImageRef)asset;	// 0x338fb735
- (id)regionsOfInterestForAssetAtPath:(id)path;	// 0x338fbbed
- (void)removeRegionOfInterestAtIndex:(int)index forAssetAtPath:(id)path saveToCache:(BOOL)cache;	// 0x338fc0bd
- (CGSize)resolutionForAssetAtPath:(id)path;	// 0x338fb671
- (id)roiInfoAtIndex:(int)index forAssetAtPath:(id)path;	// 0x338fc075
- (void)setForceOrderForRegionsOfInterest:(BOOL)interest forPath:(id)path saveToCache:(BOOL)cache;	// 0x338fc0b9
- (void)setROIInfo:(id)info atIndex:(int)index forAssetAtPath:(id)path saveToCache:(BOOL)cache;	// 0x338fc0a5
- (void)setRegionOfInterest:(CGRect)interest atIndex:(int)index forAssetAtPath:(id)path saveToCache:(BOOL)cache;	// 0x338fc0a9
- (void)setSavesToDisk:(BOOL)disk;	// 0x338fb621
- (double)startTimeForAssetAtPath:(id)path;	// 0x338fb641
- (double)stopTimeForAssetAtPath:(id)path;	// 0x338fb659
- (void)tryToSaveCache;	// 0x338fc071
- (void)updateROIInfoAtIndex:(int)index atPath:(id)path to:(id)to saveToCache:(BOOL)cache;	// 0x338fc0ad
- (void)updateRegionOfInterestAtIndex:(int)index atPath:(id)path to:(CGRect)to saveToCache:(BOOL)cache;	// 0x338fc0b1
@end

