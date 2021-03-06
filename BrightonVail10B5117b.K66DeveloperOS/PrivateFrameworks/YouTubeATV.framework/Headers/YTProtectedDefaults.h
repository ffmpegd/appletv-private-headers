/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

#import <NSObject.h> // Unknown library

@class NSString, NSMutableDictionary;

@interface YTProtectedDefaults : NSObject {
	NSMutableDictionary *_internalDictionary;	// 4 = 0x4
	BOOL _shouldSynchronize;	// 8 = 0x8
	NSString *_plistPath;	// 12 = 0xc
}
+ (id)sharedInstance;	// 0x368ee7d1
- (id)init;	// 0x368ee7ed
- (void)_protectedDataAvailable;	// 0x368ee801
- (void)_protectedDataUnvailable;	// 0x368ee805
- (id)objectForKey:(id)key;	// 0x368ee7f1
- (void)removeObjectForKey:(id)key;	// 0x368ee7f9
- (void)setObject:(id)object forKey:(id)key;	// 0x368ee7f5
- (BOOL)synchronize;	// 0x368ee7fd
@end

