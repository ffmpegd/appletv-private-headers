/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ATVSettingsMigration.h"
#import "NSNetServiceBrowserDelegate.h"
#import "NSNetServiceDelegate.h"

@class BRAccount, NSString, NSMutableArray, NSNetServiceBrowser;

__attribute__((visibility("hidden")))
@interface ATVHSManager : XXUnknownSuperclass <NSNetServiceBrowserDelegate, NSNetServiceDelegate, ATVSettingsMigration> {
	BOOL _isWirelessInterfaceActive;	// 4 = 0x4
	BOOL _isWiredInterfaceActive;	// 5 = 0x5
	BOOL _activeNetworkInterfaceInitialized;	// 6 = 0x6
	NSNetServiceBrowser *_iTunesServiceBrowser;	// 8 = 0x8
	NSNetServiceBrowser *_photoAppServiceBrowser;	// 12 = 0xc
	NSMutableArray *_resolvingServices;	// 16 = 0x10
	NSMutableArray *_monitoredServices;	// 20 = 0x14
	NSString *_hsGroupIDInternal;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) BRAccount *hsAccount;	// G=0x3d1479; @dynamic
@property(readonly, assign, nonatomic) NSString *hsGroupID;	// G=0x3d1421; @dynamic
@property(copy, nonatomic) NSString *hsGroupIDInternal;	// G=0x3d3441; S=0x3d3455; @synthesize=_hsGroupIDInternal
@property(retain, nonatomic) NSNetServiceBrowser *iTunesServiceBrowser;	// G=0x3d33c1; S=0x3d33d1; @synthesize=_iTunesServiceBrowser
@property(retain, nonatomic) NSMutableArray *monitoredServices;	// G=0x3d3421; S=0x3d3431; @synthesize=_monitoredServices
@property(retain, nonatomic) NSNetServiceBrowser *photoAppServiceBrowser;	// G=0x3d33e1; S=0x3d33f1; @synthesize=_photoAppServiceBrowser
@property(retain, nonatomic) NSMutableArray *resolvingServices;	// G=0x3d3401; S=0x3d3411; @synthesize=_resolvingServices
+ (id)sharedInstance;	// 0x3d0809
- (id)init;	// 0x3d0879
- (id)_availableHomeSharesOfType:(unsigned long)type;	// 0x3d39c1
- (BOOL)_connectAvailableDataClientsForServer:(id)server;	// 0x3d3465
- (void)_dataClientConnectionHandlerWithObject:(id)object;	// 0x3d3615
- (id)_dataServerWithID:(id)anId;	// 0x3d3a85
- (void)_handleITunesTXTRecord:(id)record service:(id)service;	// 0x3d1cc9
- (void)_handlePhotoAppTXTRecord:(id)record service:(id)service;	// 0x3d22ed
- (void)_handleTXTRecord:(id)record service:(id)service;	// 0x3d1bf1
- (void)_iTunesRequestTimedOut:(id)anOut;	// 0x3d373d
- (void)_networkStateChanged:(id)changed;	// 0x3d3815
- (void)_resolveBonjourWithDataServer:(id)dataServer;	// 0x3d1891
- (void)_serverAvailableForConnection:(id)connection;	// 0x3d3589
- (unsigned long long)_uint64ValueWithData:(id)data;	// 0x3d3bd1
- (void)cleanUpOrEnableHomeShareState;	// 0x3d174d
- (BOOL)connectToServer:(id)server;	// 0x3d15fd
- (void)disableHomeSharing;	// 0x3d1001
- (void)enableBonjourBrowseWithHSGroupID:(id)hsgroupID;	// 0x3d11e9
- (void)enableHomeSharingWithAccountName:(id)accountName andPassword:(id)password;	// 0x3d0a55
- (id)homeSharesOfTypes:(unsigned long)types;	// 0x3d14e9
// declared property getter: - (id)hsAccount;	// 0x3d1479
// declared property getter: - (id)hsGroupID;	// 0x3d1421
// declared property getter: - (id)hsGroupIDInternal;	// 0x3d3441
// declared property getter: - (id)iTunesServiceBrowser;	// 0x3d33c1
- (void)migrateFrom:(id)from to:(id)to;	// 0x3d0939
// declared property getter: - (id)monitoredServices;	// 0x3d3421
- (void)netService:(id)service didNotResolve:(id)resolve;	// 0x3d310d
- (void)netService:(id)service didUpdateTXTRecordData:(id)data;	// 0x3d2f75
- (void)netServiceBrowser:(id)browser didFindService:(id)service moreComing:(BOOL)coming;	// 0x3d2819
- (void)netServiceBrowser:(id)browser didNotSearch:(id)search;	// 0x3d27e1
- (void)netServiceBrowser:(id)browser didRemoveService:(id)service moreComing:(BOOL)coming;	// 0x3d28a9
- (void)netServiceBrowserDidStopSearch:(id)netServiceBrowser;	// 0x3d27a9
- (void)netServiceBrowserWillSearch:(id)netServiceBrowser;	// 0x3d2771
- (void)netServiceDidResolveAddress:(id)netService;	// 0x3d3029
// declared property getter: - (id)photoAppServiceBrowser;	// 0x3d33e1
// declared property getter: - (id)resolvingServices;	// 0x3d3401
// declared property setter: - (void)setHsGroupIDInternal:(id)internal;	// 0x3d3455
// declared property setter: - (void)setITunesServiceBrowser:(id)browser;	// 0x3d33d1
// declared property setter: - (void)setMonitoredServices:(id)services;	// 0x3d3431
// declared property setter: - (void)setPhotoAppServiceBrowser:(id)browser;	// 0x3d33f1
// declared property setter: - (void)setResolvingServices:(id)services;	// 0x3d3411
- (int)sharingState;	// 0x3d1561
@end
