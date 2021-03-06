/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSNetServiceDelegate.h"
#import "BRViewController.h"
#import "NSNetServiceBrowserDelegate.h"

@class NSNetServiceBrowser, SettingsComputersDiagnosticsView, NSMutableArray;

__attribute__((visibility("hidden")))
@interface SettingsComputersDiagnosticsBrowserController : BRViewController <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {
	SettingsComputersDiagnosticsView *_diagnosticsBrowserView;	// 104 = 0x68
	int _state;	// 108 = 0x6c
	NSNetServiceBrowser *_netServiceBrowser;	// 112 = 0x70
	BOOL _isSearching;	// 116 = 0x74
	NSMutableArray *_foundShares;	// 120 = 0x78
	NSMutableArray *_resolvingServices;	// 124 = 0x7c
}
- (id)initWithDiagnosticState:(int)diagnosticState;	// 0x30e115
- (void).cxx_destruct;	// 0x30e90d
- (void)_disconnectAllActiveClients;	// 0x30ec89
- (void)_serverStatusDidChange:(id)_serverStatus;	// 0x30ec79
- (void)_startHomeShareListing;	// 0x30e969
- (void)dealloc;	// 0x30e3cd
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x30e859
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x30e4b5
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x30e839
- (void)netService:(id)service didNotResolve:(id)resolve;	// 0x30f2a1
- (void)netServiceBrowser:(id)browser didFindService:(id)service moreComing:(BOOL)coming;	// 0x30ef09
- (void)netServiceBrowser:(id)browser didNotSearch:(id)search;	// 0x30eef5
- (void)netServiceBrowser:(id)browser didRemoveService:(id)service moreComing:(BOOL)coming;	// 0x30f035
- (void)netServiceBrowserDidStopSearch:(id)netServiceBrowser;	// 0x30eee1
- (void)netServiceBrowserWillSearch:(id)netServiceBrowser;	// 0x30eecd
- (void)netServiceDidResolveAddress:(id)netService;	// 0x30f0a1
- (long)numberOfSectionsInList:(id)list;	// 0x30e835
- (void)reload;	// 0x30e85d
- (void)wasPopped;	// 0x30e439
@end

