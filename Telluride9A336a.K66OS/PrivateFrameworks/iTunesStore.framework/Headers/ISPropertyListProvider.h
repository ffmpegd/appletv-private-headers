/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "NSCopying.h"
#import "ISDataProvider.h"
#import "iTunesStore-Structs.h"


@interface ISPropertyListProvider : ISDataProvider <NSCopying> {
	BOOL _shouldPostFooterSectionChanged;	// 36 = 0x24
	BOOL _shouldProcessAccount;	// 37 = 0x25
	BOOL _shouldProcessAuthenticationDialogs;	// 38 = 0x26
	BOOL _shouldProcessDialogs;	// 39 = 0x27
	BOOL _shouldProcessProtocol;	// 40 = 0x28
	BOOL _shouldTriggerDownloads;	// 41 = 0x29
}
@property(assign) BOOL shouldPostFooterSectionChanged;	// G=0x35ec3399; S=0x35ec33a9; @synthesize=_shouldPostFooterSectionChanged
@property(assign) BOOL shouldProcessAccount;	// G=0x35ec33b9; S=0x35ec33c9; @synthesize=_shouldProcessAccount
@property(assign) BOOL shouldProcessAuthenticationDialogs;	// G=0x35ec33d9; S=0x35ec33e9; @synthesize=_shouldProcessAuthenticationDialogs
@property(assign) BOOL shouldProcessDialogs;	// G=0x35ec33f9; S=0x35ec3409; @synthesize=_shouldProcessDialogs
@property(assign) BOOL shouldProcessProtocol;	// G=0x35ec3419; S=0x35ec3429; @synthesize=_shouldProcessProtocol
@property(assign) BOOL shouldTriggerDownloads;	// G=0x35ec3439; S=0x35ec3449; @synthesize=_shouldTriggerDownloads
- (id)init;	// 0x35ec2399
- (void)_checkDownloadQueues;	// 0x35ec2b09
- (void)_performActionsForResponse:(id)response;	// 0x35ec2b6d
- (BOOL)_processFailureTypeFromPropertyList:(id)propertyList error:(id *)error;	// 0x35ec314d
- (BOOL)_runAuthorizationDialog:(id)dialog returningError:(id *)error;	// 0x35ec3205
- (void)_selectFooterSection:(id)section;	// 0x35ec3035
- (id)copyWithZone:(NSZone *)zone;	// 0x35ec241d
- (BOOL)parseData:(id)data returningError:(id *)error;	// 0x35ec2a11
- (BOOL)processDialogFromPropertyList:(id)propertyList returningError:(id *)error;	// 0x35ec2511
- (BOOL)processPropertyList:(id)list returningError:(id *)error;	// 0x35ec27c5
// declared property setter: - (void)setShouldPostFooterSectionChanged:(BOOL)postFooterSectionChanged;	// 0x35ec33a9
// declared property setter: - (void)setShouldProcessAccount:(BOOL)processAccount;	// 0x35ec33c9
// declared property setter: - (void)setShouldProcessAuthenticationDialogs:(BOOL)processAuthenticationDialogs;	// 0x35ec33e9
// declared property setter: - (void)setShouldProcessDialogs:(BOOL)processDialogs;	// 0x35ec3409
// declared property setter: - (void)setShouldProcessProtocol:(BOOL)processProtocol;	// 0x35ec3429
// declared property setter: - (void)setShouldTriggerDownloads:(BOOL)triggerDownloads;	// 0x35ec3449
// declared property getter: - (BOOL)shouldPostFooterSectionChanged;	// 0x35ec3399
// declared property getter: - (BOOL)shouldProcessAccount;	// 0x35ec33b9
// declared property getter: - (BOOL)shouldProcessAuthenticationDialogs;	// 0x35ec33d9
// declared property getter: - (BOOL)shouldProcessDialogs;	// 0x35ec33f9
// declared property getter: - (BOOL)shouldProcessProtocol;	// 0x35ec3419
// declared property getter: - (BOOL)shouldTriggerDownloads;	// 0x35ec3439
@end

