/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"


__attribute__((visibility("hidden")))
@interface PlayReady : NSObject {
}
+ (id)PlayReadyErrorToString:(int)string;	// 0x3695d281
+ (char *)apiSecret;	// 0x3695d0d9
+ (void)cleanup;	// 0x3695d1f5
+ (id)getKey:(int *)key;	// 0x3695d235
+ (void)parseNetflixContentHeader:(id)header keyEnvelope:(id)envelope drmHeader:(vector<unsigned char, std::allocator<unsigned char> > *)header3 ivData:(vector<unsigned char, std::allocator<unsigned char> > *)data cryptoData:(vector<unsigned char, std::allocator<unsigned char> > *)data5;	// 0x3695d53d
+ (void)setUniqueId:(char *)anId :(unsigned long)arg2;	// 0x3695d279
+ (void)startWithId:(const char *)anId;	// 0x3695d0dd
+ (void)triggerKeyRetrieval:(id)retrieval :(id)arg2 :(int)arg3;	// 0x3695d12d
- (id)init;	// 0x3695d2a1
- (int)decryptData:(char *)data :(unsigned long)arg2;	// 0x3695d4e5
- (void)doGetKey:(id)key;	// 0x3695d2dd
- (int)generateChallenge:(const char *)challenge :(unsigned long)arg2 :(char *)arg3 :(unsigned long *)arg4;	// 0x3695d4c5
- (int)getPRKey:(char *)key :(unsigned long)arg2;	// 0x3695d4d5
- (int)isInitialized;	// 0x3695d539
- (int)sendRequest:(const char *)request :(unsigned long)arg2 :(char *)arg3 :(unsigned long *)arg4;	// 0x3695d4c1
- (int)setIv:(char *)iv :(unsigned long)arg2;	// 0x3695d4dd
- (void)unInitialize;	// 0x3695d4ed
@end

