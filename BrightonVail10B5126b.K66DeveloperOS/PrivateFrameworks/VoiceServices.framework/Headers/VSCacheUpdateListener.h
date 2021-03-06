/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <NSObject.h> // Unknown library

@class NSLock, NSMutableArray, NSDictionary, NSTimer;

@interface VSCacheUpdateListener : NSObject {
	NSLock *_lock;	// 4 = 0x4
	NSMutableArray *_updateRequestQueue;	// 8 = 0x8
	NSDictionary *_dataProviders;	// 12 = 0xc
	NSTimer *_flushTimer;	// 16 = 0x10
	BOOL _isListening;	// 20 = 0x14
}
+ (id)sharedListener;	// 0x35c224f5
+ (id)sharedListenerIfExists;	// 0x35c22561
- (id)init;	// 0x35c223d9
- (void)_enqueueRequest:(id)request;	// 0x35c22bb9
- (void)_flush;	// 0x35c22e5d
- (id)_initShared;	// 0x35c223dd
- (void)_spokenLanguageChanged:(id)changed;	// 0x35c22ba5
- (void)dealloc;	// 0x35c2246d
- (void)performUpdateForModelIdentifier:(id)modelIdentifier classIdentifier:(id)identifier;	// 0x35c22b3d
- (void)startListening;	// 0x35c22571
- (void)stopListening;	// 0x35c22a29
@end

