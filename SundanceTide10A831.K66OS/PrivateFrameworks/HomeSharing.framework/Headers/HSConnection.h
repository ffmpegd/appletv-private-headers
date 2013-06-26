/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <NSObject.h> // Unknown library
#import "HomeSharing-Structs.h"

@class NSString, NSURL, HSFairPlayInfo, HSConnectionStream, HSConnectionConfiguration;
@protocol OS_dispatch_queue;

@interface HSConnection : NSObject {
	HSConnectionConfiguration *_configuration;	// 4 = 0x4
	int _connectionState;	// 8 = 0x8
	HSConnectionStream *_connectionStream;	// 12 = 0xc
	HSConnectionStream *_concurrentConnectionStream;	// 16 = 0x10
	int _connectionType;	// 20 = 0x14
	NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
	CFReadStreamRef _readStream;	// 28 = 0x1c
	BOOL authenticationRequired;	// 32 = 0x20
	unsigned basePlaylistContainerID;	// 36 = 0x24
	unsigned databaseID;	// 40 = 0x28
	unsigned databaseRevision;	// 44 = 0x2c
	HSFairPlayInfo *fairPlayInfo;	// 48 = 0x30
	NSString *homeSharingGroupID;	// 52 = 0x34
	NSString *password;	// 56 = 0x38
	unsigned sessionID;	// 60 = 0x3c
	NSString *username;	// 64 = 0x40
}
@property(assign, getter=isAuthenticationRequired) BOOL authenticationRequired;	// G=0x333683a1; S=0x333683b9; @synthesize
@property(assign) unsigned basePlaylistContainerID;	// G=0x333683d1; S=0x333683e5; @synthesize
@property(readonly, assign) NSURL *baseURL;	// G=0x33365c3d; 
@property(assign) int connectionState;	// G=0x333683fd; S=0x33368411; @synthesize=_connectionState
@property(readonly, assign) int connectionType;	// G=0x33368429; @synthesize=_connectionType
@property(assign) unsigned databaseID;	// G=0x3336843d; S=0x33368451; @synthesize
@property(assign) unsigned databaseRevision;	// G=0x33368469; S=0x3336847d; @synthesize
@property(retain) HSFairPlayInfo *fairPlayInfo;	// G=0x33368495; S=0x333684a9; @synthesize
@property(copy) NSString *homeSharingGroupID;	// G=0x333684b9; S=0x333684cd; @synthesize
@property(copy) NSString *password;	// G=0x333684dd; S=0x333684f1; @synthesize
@property(assign) unsigned sessionID;	// G=0x33368501; S=0x33368515; @synthesize
@property(copy) NSString *username;	// G=0x3336852d; S=0x33368541; @synthesize
- (id)initWithBaseURL:(id)baseURL;	// 0x333659e9
- (id)initWithBaseURL:(id)baseURL connectionType:(int)type;	// 0x333659fd
- (id)initWithConfiguration:(id)configuration connectionType:(int)type;	// 0x33365a7d
- (void)_continueFPSetupNegotiationWithData:(id)data internalConnectionCompletionHandler:(id)handler;	// 0x33366955
- (void)_loadDatabaseWithInternalConnectionCompletionHandler:(id)internalConnectionCompletionHandler;	// 0x33366b95
- (void)_notifyServerOfActivity;	// 0x33367575
- (void)_sendRequest:(id)request onConnectionStream:(id)stream withInternalResponseHandler:(id)internalResponseHandler;	// 0x3336761d
// declared property getter: - (unsigned)basePlaylistContainerID;	// 0x333683d1
// declared property getter: - (id)baseURL;	// 0x33365c3d
- (void)checkForDatabaseUpdatesWithCompletionHandler:(id)completionHandler;	// 0x33366689
- (void)connectWithCompletionHandler:(id)completionHandler;	// 0x33365c85
// declared property getter: - (int)connectionState;	// 0x333683fd
// declared property getter: - (int)connectionType;	// 0x33368429
// declared property getter: - (unsigned)databaseID;	// 0x3336843d
// declared property getter: - (unsigned)databaseRevision;	// 0x33368469
- (void)dealloc;	// 0x33365b75
- (void)disconnect;	// 0x33366219
// declared property getter: - (id)fairPlayInfo;	// 0x33368495
// declared property getter: - (id)homeSharingGroupID;	// 0x333684b9
// declared property getter: - (BOOL)isAuthenticationRequired;	// 0x333683a1
// declared property getter: - (id)password;	// 0x333684dd
- (void)sendConcurrentRequest:(id)request withResponseHandler:(id)responseHandler;	// 0x33366575
- (void)sendRequest:(id)request withResponseHandler:(id)responseHandler;	// 0x33366461
// declared property getter: - (unsigned)sessionID;	// 0x33368501
// declared property setter: - (void)setAuthenticationRequired:(BOOL)required;	// 0x333683b9
// declared property setter: - (void)setBasePlaylistContainerID:(unsigned)anId;	// 0x333683e5
// declared property setter: - (void)setConnectionState:(int)state;	// 0x33368411
// declared property setter: - (void)setDatabaseID:(unsigned)anId;	// 0x33368451
// declared property setter: - (void)setDatabaseRevision:(unsigned)revision;	// 0x3336847d
// declared property setter: - (void)setFairPlayInfo:(id)info;	// 0x333684a9
// declared property setter: - (void)setHomeSharingGroupID:(id)anId;	// 0x333684cd
// declared property setter: - (void)setPassword:(id)password;	// 0x333684f1
// declared property setter: - (void)setSessionID:(unsigned)anId;	// 0x33368515
// declared property setter: - (void)setUsername:(id)username;	// 0x33368541
// declared property getter: - (id)username;	// 0x3336852d
@end
