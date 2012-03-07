/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableSet, NSArray, SSXPCConnection, SSDownloadManagerOptions;

@interface SSDownloadManager : NSObject {
@private
	dispatch_queue_s *_accessQueue;	// 4 = 0x4
	NSArray *_activeDownloads;	// 8 = 0x8
	BOOL _activeDownloadsChanged;	// 12 = 0xc
	dispatch_queue_s *_backgroundQueue;	// 16 = 0x10
	SSXPCConnection *_connection;	// 20 = 0x14
	NSArray *_downloads;	// 24 = 0x18
	BOOL _downloadsChanged;	// 28 = 0x1c
	BOOL _isUsingNetwork;	// 29 = 0x1d
	SSXPCConnection *_observerConnection;	// 32 = 0x20
	dispatch_queue_s *_observerQueue;	// 36 = 0x24
	CFArrayRef _observers;	// 40 = 0x28
	SSDownloadManagerOptions *_options;	// 44 = 0x2c
	NSMutableSet *_removedDownloads;	// 48 = 0x30
}
@property(readonly, assign) NSArray *activeDownloads;	// G=0x3420a401; 
@property(readonly, assign) NSArray *downloads;	// G=0x3420ace9; 
@property(readonly, assign) SSDownloadManagerOptions *managerOptions;	// G=0x3420b15d; 
@property(readonly, assign, getter=isUsingNetwork) BOOL usingNetwork;	// G=0x3420b089; 
+ (id)EBookDownloadKinds;	// 0x3420b765
+ (id)EBookDownloadManager;	// 0x3420b4f5
+ (id)IPodDownloadKinds;	// 0x3420b799
+ (id)IPodDownloadManager;	// 0x3420b5c5
+ (void)_sendGlobalHandler:(id)handler;	// 0x3420c1a9
+ (void)_triggerDownloads;	// 0x3420bc7d
+ (void)reevaluateBackgroundDownloadsForBundleIdentifiers:(id)bundleIdentifiers;	// 0x3420b869
+ (void)removePersistenceIdentifier:(id)identifier;	// 0x3420a2f5
+ (void)retryAllRestoreDownloads;	// 0x3420b90d
+ (void)setDownloadHandler:(id)handler;	// 0x3420a399
+ (id)softwareDownloadKinds;	// 0x3420b9bd
+ (id)softwareDownloadManager;	// 0x3420b695
- (id)initWithDownloadKinds:(id)downloadKinds;	// 0x34209fad
- (id)initWithManagerOptions:(id)managerOptions;	// 0x3420a025
- (id)_XPCConnection;	// 0x3420c199
- (void)_connectAsObserver;	// 0x3420c26d
- (id)_copyDownloadKindsUsingNetwork;	// 0x3420c521
- (id)_copyDownloads;	// 0x3420c705
- (id)_copyDownloadsForMessage:(long long)message downloadIDs:(void *)ids;	// 0x3420c875
- (void)_finishDownloads:(id)downloads;	// 0x3420bd39
- (void)_handleDownloadStatesChanged:(void *)changed;	// 0x3420d685
- (void)_handleDownloadsChanged:(void *)changed;	// 0x3420cbb5
- (void)_handleDownloadsRemoved:(void *)removed;	// 0x3420d341
- (void)_handleMessage:(void *)message fromServerConnection:(xpc_connection_s *)serverConnection;	// 0x3420de75
- (void)_handleReply:(void *)reply forDownloads:(id)downloads message:(void *)message isRetry:(BOOL)retry block:(id)block;	// 0x3420df29
- (id)_initSSDownloadManager;	// 0x34209e2d
- (void)_insertDownloads:(id)downloads before:(id)before after:(id)after completionBlock:(id)block;	// 0x3420e1a9
- (void)_loadDownloadKindsUsingNetwork;	// 0x3420e419
- (void)_moveDownload:(id)download before:(id)before after:(id)after completionBlock:(id)block;	// 0x3420e5d5
- (void *)_newOptionsDictionary;	// 0x3420e691
- (void)_sendMessage:(void *)message withCompletionBlock:(id)completionBlock;	// 0x3420e765
- (void)_sendMessageToObservers:(SEL)observers;	// 0x3420e905
- (void)_sendObserverConnection;	// 0x3420eb15
- (void)_willFinishDownloads:(id)downloads;	// 0x3420bf31
// declared property getter: - (id)activeDownloads;	// 0x3420a401
- (void)addDownloads:(id)downloads completionBlock:(id)block;	// 0x3420a689
- (void)addObserver:(id)observer;	// 0x3420aa65
- (BOOL)canCancelDownload:(id)download;	// 0x3420ab35
- (void)cancelAllDownloadsWithCompletionBlock:(id)completionBlock;	// 0x3420ab4d
- (void)cancelDownloads:(id)downloads completionBlock:(id)block;	// 0x3420abd9
- (void)dealloc;	// 0x3420a0e9
// declared property getter: - (id)downloads;	// 0x3420ace9
- (void)finishDownloads:(id)downloads;	// 0x3420ae75
- (void)getDownloadsUsingBlock:(id)block;	// 0x3420aea9
- (void)insertDownloads:(id)downloads afterDownload:(id)download completionBlock:(id)block;	// 0x3420b041
- (void)insertDownloads:(id)downloads beforeDownload:(id)download completionBlock:(id)block;	// 0x3420b065
// declared property getter: - (BOOL)isUsingNetwork;	// 0x3420b089
// declared property getter: - (id)managerOptions;	// 0x3420b15d
- (void)moveDownload:(id)download afterDownload:(id)download2 completionBlock:(id)block;	// 0x3420b195
- (void)moveDownload:(id)download beforeDownload:(id)download2 completionBlock:(id)block;	// 0x3420b1b9
- (void)pauseDownloads:(id)downloads completionBlock:(id)block;	// 0x3420b1dd
- (void)reloadFromServer;	// 0x3420b9f1
- (void)removeObserver:(id)observer;	// 0x3420b3fd
- (void)resumeDownloads:(id)downloads completionBlock:(id)block;	// 0x3420b2ed
- (void)setDownloads:(id)downloads completionBlock:(id)block;	// 0x3420b4d5
- (void)setDownloads:(id)downloads forKinds:(id)kinds completionBlock:(id)block;	// 0x3420ba41
@end
