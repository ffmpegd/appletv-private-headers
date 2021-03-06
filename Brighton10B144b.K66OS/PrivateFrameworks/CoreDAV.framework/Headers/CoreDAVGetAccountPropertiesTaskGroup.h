/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTaskDelegate.h"
#import "CoreDAVPropFindTaskDelegate.h"
#import "CoreDAVTaskGroup.h"
#import "CoreDAVOptionsTaskDelegate.h"
#import "CoreDAVPrincipalSearchPropertySetTaskDelegate.h"

@class NSSet, NSURL, NSString, NSMutableSet;
@protocol CoreDAVGetAccountPropertiesTaskGroupDelegate;

@interface CoreDAVGetAccountPropertiesTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate, CoreDAVOptionsTaskDelegate, CoreDAVPrincipalSearchPropertySetTaskDelegate, CoreDAVTaskDelegate> {
	NSURL *_principalURL;	// 44 = 0x2c
	NSString *_displayName;	// 48 = 0x30
	NSURL *_resourceID;	// 52 = 0x34
	NSSet *_emailAddresses;	// 56 = 0x38
	NSSet *_collections;	// 60 = 0x3c
	NSSet *_principalSearchProperties;	// 64 = 0x40
	BOOL _isExpandPropertyReportSupported;	// 68 = 0x44
	BOOL _fetchPrincipalSearchProperties;	// 69 = 0x45
	BOOL _shouldIgnoreHomeSetOnDifferentHost;	// 70 = 0x46
	NSMutableSet *_redirectHistory;	// 72 = 0x48
}
@property(readonly, assign) NSSet *collections;	// G=0x33704189; @synthesize=_collections
@property(assign, nonatomic) id<CoreDAVGetAccountPropertiesTaskGroupDelegate> delegate;	// @dynamic
@property(readonly, assign) NSString *displayName;	// G=0x3370414d; @synthesize=_displayName
@property(readonly, assign) NSSet *emailAddresses;	// G=0x33704175; @synthesize=_emailAddresses
@property(assign) BOOL fetchPrincipalSearchProperties;	// G=0x337041b5; S=0x337041cd; @synthesize=_fetchPrincipalSearchProperties
@property(readonly, assign) BOOL isExpandPropertyReportSupported;	// G=0x3370419d; @synthesize=_isExpandPropertyReportSupported
@property(readonly, assign) NSSet *principalSearchProperties;	// G=0x337041e5; @synthesize=_principalSearchProperties
@property(readonly, assign) NSURL *principalURL;	// G=0x33704139; @synthesize=_principalURL
@property(readonly, assign) NSURL *resourceID;	// G=0x33704161; @synthesize=_resourceID
@property(assign, nonatomic) BOOL shouldIgnoreHomeSetOnDifferentHost;	// G=0x337041f9; S=0x33704209; @synthesize=_shouldIgnoreHomeSetOnDifferentHost
- (id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager;	// 0x33702b89
- (id)_copyAccountPropertiesPropFindElements;	// 0x33702e39
- (void)_setPropertiesFromParsedResponses:(id)parsedResponses;	// 0x337030f1
- (void)_taskCompleted:(id)completed withError:(id)error;	// 0x3370364d
- (void)coaxServerForPrincipalHeaders;	// 0x33703b31
// declared property getter: - (id)collections;	// 0x33704189
- (void)dealloc;	// 0x33702c05
- (id)description;	// 0x33702ccd
// declared property getter: - (id)displayName;	// 0x3370414d
// declared property getter: - (id)emailAddresses;	// 0x33704175
// declared property getter: - (BOOL)fetchPrincipalSearchProperties;	// 0x337041b5
- (BOOL)forceOptionsRequest;	// 0x337036a5
- (id)homeSet;	// 0x33702fb1
// declared property getter: - (BOOL)isExpandPropertyReportSupported;	// 0x3370419d
// declared property getter: - (id)principalSearchProperties;	// 0x337041e5
// declared property getter: - (id)principalURL;	// 0x33704139
- (void)processPrincipalHeaders:(id)headers;	// 0x33703d59
- (void)propFindTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0x337036a9
// declared property getter: - (id)resourceID;	// 0x33704161
- (void)searchPropertySetTask:(id)task completetWithPropertySearchSet:(id)propertySearchSet error:(id)error;	// 0x33703ea9
// declared property setter: - (void)setFetchPrincipalSearchProperties:(BOOL)properties;	// 0x337041cd
// declared property setter: - (void)setShouldIgnoreHomeSetOnDifferentHost:(BOOL)ignoreHomeSetOnDifferentHost;	// 0x33704209
// declared property getter: - (BOOL)shouldIgnoreHomeSetOnDifferentHost;	// 0x337041f9
- (void)startTaskGroup;	// 0x33702fb5
- (void)task:(id)task didFinishWithError:(id)error;	// 0x33703f6d
- (void)taskGroupWillCancelWithError:(id)taskGroup;	// 0x33702dcd
@end

