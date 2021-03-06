/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, MCPlug, NSMutableDictionary, NSRecursiveLock, NSString;

@interface MCMontage : NSObject {
@private
	MCPlug *mRootPlug;	// 4 = 0x4
	double mAudioFadeOutDuration;	// 8 = 0x8
	NSString *mBasePath;	// 16 = 0x10
	NSDictionary *mImprintWhileLoading;	// 20 = 0x14
	NSMutableDictionary *mVideoAssetsForFilePaths;	// 24 = 0x18
	NSMutableDictionary *mVideoAssetsForObjectIDs;	// 28 = 0x1c
	NSMutableDictionary *mAudioAssetsForFilePaths;	// 32 = 0x20
	NSMutableDictionary *mAudioAssetsForObjectIDs;	// 36 = 0x24
	NSMutableDictionary *mContainersForObjectIDs;	// 40 = 0x28
	NSRecursiveLock *mLock;	// 44 = 0x2c
}
@property(assign, nonatomic) double audioFadeOutDuration;	// G=0x335d1a9d; S=0x335d1ab5; @synthesize=mAudioFadeOutDuration
@property(copy) NSString *basePath;	// G=0x335d1ac9; S=0x335d1add; @synthesize=mBasePath
@property(readonly, assign, nonatomic) MCPlug *rootPlug;	// G=0x335d1a8d; @synthesize=mRootPlug
- (id)init;	// 0x335cfaf9
- (id)initFromScratch;	// 0x335cfc29
- (id)initWithData:(id)data error:(id *)error;	// 0x335cfca9
- (id)assetForObjectID:(id)objectID;	// 0x335d1339
- (id)assets;	// 0x335d13b1
- (id)audioAssetForFileAtPath:(id)path;	// 0x335d1191
- (id)audioAssetForObjectID:(id)objectID;	// 0x335d1391
- (id)audioAssets;	// 0x335d16ed
// declared property getter: - (double)audioFadeOutDuration;	// 0x335d1a9d
// declared property getter: - (id)basePath;	// 0x335d1ac9
- (id)containerForObjectID:(id)objectID;	// 0x335d1811
- (id)createEffectContainer;	// 0x335d0da9
- (id)createNavigatorContainer;	// 0x335d0ec9
- (id)createParallelizerContainer;	// 0x335d0c89
- (id)createSerializerContainer;	// 0x335d0b69
- (id)data;	// 0x335d0ad1
- (void)dealloc;	// 0x335d0161
- (void)demolish;	// 0x335d01b1
- (void)forgetAboutContainer:(id)container;	// 0x335d19b9
- (id)imprint;	// 0x335d05d5
- (void)lock;	// 0x335d0b29
// declared property getter: - (id)rootPlug;	// 0x335d1a8d
// declared property setter: - (void)setAudioFadeOutDuration:(double)duration;	// 0x335d1ab5
// declared property setter: - (void)setBasePath:(id)path;	// 0x335d1add
- (void)unlock;	// 0x335d0b49
- (id)videoAssetForFileAtPath:(id)path;	// 0x335d0fe9
- (id)videoAssetForObjectID:(id)objectID;	// 0x335d1371
- (id)videoAssets;	// 0x335d15c9
@end

