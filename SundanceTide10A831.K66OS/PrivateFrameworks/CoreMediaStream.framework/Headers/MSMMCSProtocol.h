/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "CoreMediaStream-Structs.h"
#import <NSObject.h> // Unknown library
#import "MSStorageProtocol.h"

@class NSString;

@interface MSMMCSProtocol : NSObject <MSStorageProtocol> {
	NSString *_personID;	// 4 = 0x4
	NSString *_MMCSDirPath;	// 8 = 0x8
	MMCSEngineRef _engine;	// 12 = 0xc
	NSString *_engineDirPath;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) MMCSEngineRef engine;	// G=0x3074eea5; @synthesize=_engine
@property(readonly, assign, nonatomic) NSString *personID;	// G=0x3074ee95; @synthesize=_personID
+ (id)computeItemIDForAsset:(id)asset;	// 0x3074ebc1
- (id)initWithPersonID:(id)personID path:(id)path;	// 0x3074e415
- (void).cxx_destruct;	// 0x3074eeb5
- (int)_getFileDescriptorFromItem:(unsigned long long)item;	// 0x3074eb09
- (void)_getItemDone:(unsigned long long)done path:(id)path error:(id)error;	// 0x3074eb35
- (id)_getUTIFromItem:(unsigned long long)item;	// 0x3074eb31
- (void)_putItemDone:(unsigned long long)done error:(id)error;	// 0x3074eb69
- (void)_requestCompleted;	// 0x3074eb99
- (void)abort;	// 0x3074e9b5
- (void)deactivate;	// 0x3074e891
- (void)deactivateRemoveAllFiles:(BOOL)files;	// 0x3074e8a5
- (void)dealloc;	// 0x3074e975
- (void)didFinishUsingAssets:(id)assets;	// 0x3074e9c9
// declared property getter: - (MMCSEngineRef)engine;	// 0x3074eea5
// declared property getter: - (id)personID;	// 0x3074ee95
@end

