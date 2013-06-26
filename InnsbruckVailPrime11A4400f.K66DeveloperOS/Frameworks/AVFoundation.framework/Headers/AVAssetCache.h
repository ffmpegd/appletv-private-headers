/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class AVAssetCacheInternal, NSURL;

@interface AVAssetCache : NSObject {
	AVAssetCacheInternal *_priv;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSURL *URL;	// G=0x2c2feb69; 
@property(readonly, assign, nonatomic) long long currentSize;	// G=0x2c2feb11; 
@property(assign, nonatomic) long long maxEntrySize;	// G=0x2c2fea21; S=0x2c2fea79; 
@property(assign, nonatomic) long long maxSize;	// G=0x2c2fe92d; S=0x2c2fe985; 
+ (id)assetCacheWithURL:(id)url;	// 0x2c2fe721
- (id)initWithURL:(id)url;	// 0x2c2fe769
// declared property getter: - (id)URL;	// 0x2c2feb69
- (id)allKeys;	// 0x2c2fec59
// declared property getter: - (long long)currentSize;	// 0x2c2feb11
- (void)dealloc;	// 0x2c2fe87d
- (void)finalize;	// 0x2c2fe8e9
// declared property getter: - (long long)maxEntrySize;	// 0x2c2fea21
// declared property getter: - (long long)maxSize;	// 0x2c2fe92d
- (void)removeEntryForKey:(id)key;	// 0x2c2feb89
// declared property setter: - (void)setMaxEntrySize:(long long)size;	// 0x2c2fea79
// declared property setter: - (void)setMaxSize:(long long)size;	// 0x2c2fe985
- (long long)sizeOfEntryForKey:(id)key;	// 0x2c2fec05
@end
