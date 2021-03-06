/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBRequester.h> // Unknown library
#import "GeoServices-Structs.h"

@class NSString, NSThread;

@interface GEORequester : PBRequester {
	BOOL _disableReplay;	// 111 = 0x6f
	NSThread *_thread;	// 112 = 0x70
	BOOL _usePersistentConnection;	// 116 = 0x74
	BOOL _useBackgroundConnection;	// 117 = 0x75
	NSString *_debugRequestName;	// 120 = 0x78
}
@property(retain, nonatomic) NSString *debugRequestName;	// G=0x34191e69; S=0x3414d5dd; @synthesize=_debugRequestName
@property(assign) BOOL disableReplay;	// G=0x34191e79; S=0x34191e91; @synthesize=_disableReplay
+ (void)replayRequests;	// 0x34191b09
+ (void)stopAllRequests;	// 0x341371dd
- (id)initWithURL:(id)url andDelegate:(id)delegate;	// 0x34191b49
- (id)initWithURL:(id)url andDelegate:(id)delegate usePersistentConnection:(BOOL)connection;	// 0x34155619
- (id)initWithURL:(id)url andDelegate:(id)delegate usePersistentConnection:(BOOL)connection useBackgroundConnection:(BOOL)connection4;	// 0x3414d3dd
- (void)_applicationDidStopAllRequests:(id)_application;	// 0x34191b71
- (void)_applicationWantsToReplayRequests:(id)replayRequests;	// 0x34191bed
- (void)_handleResumeOnThread;	// 0x34191c61
- (void)_handleSuspendOnThread;	// 0x34191bad
- (void)dealloc;	// 0x3415079d
// declared property getter: - (id)debugRequestName;	// 0x34191e69
// declared property getter: - (BOOL)disableReplay;	// 0x34191e79
- (id)logRequestToFile;	// 0x3414ecdd
- (id)logResponseToFile;	// 0x3414f87d
- (CFURLRequestRef)newCFMutableURLRequestWithURL:(id)url;	// 0x3414ee15
- (id)newConnectionWithCFURLRequest:(CFURLRequestRef)cfurlrequest delegate:(id)delegate;	// 0x3414f0b1
- (id)persistentConnectionSession;	// 0x3414ee79
// declared property setter: - (void)setDebugRequestName:(id)name;	// 0x3414d5dd
// declared property setter: - (void)setDisableReplay:(BOOL)replay;	// 0x34191e91
- (void)start;	// 0x3414d5ed
@end

