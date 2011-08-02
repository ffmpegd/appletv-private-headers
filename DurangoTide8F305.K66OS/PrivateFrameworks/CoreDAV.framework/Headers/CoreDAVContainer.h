/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <NSObject.h> // Unknown library

@class NSURL, NSSet, CoreDAVResourceTypeItem, NSDictionary, NSString;

@interface CoreDAVContainer : NSObject {
	BOOL _isUnauthenticated;	// 4 = 0x4
	NSURL *_url;	// 8 = 0x8
	CoreDAVResourceTypeItem *_resourceType;	// 12 = 0xc
	NSString *_containerTitle;	// 16 = 0x10
	NSSet *_privileges;	// 20 = 0x14
	NSString *_pushKey;	// 24 = 0x18
	NSDictionary *_pushTransports;	// 28 = 0x1c
	NSURL *_resourceID;	// 32 = 0x20
	NSSet *_supportedReports;	// 36 = 0x24
	NSString *_quotaAvailable;	// 40 = 0x28
	NSString *_quotaUsed;	// 44 = 0x2c
	NSURL *_owner;	// 48 = 0x30
	NSURL *_addMemberURL;	// 52 = 0x34
	NSDictionary *_bulkRequests;	// 56 = 0x38
}
@property(retain) NSURL *addMemberURL;	// G=0x338646e1; S=0x338648f5; @synthesize=_addMemberURL
@property(retain) NSDictionary *bulkRequests;	// G=0x338646f9; S=0x33864921; @synthesize=_bulkRequests
@property(retain) NSString *containerTitle;	// G=0x338645f1; S=0x3386473d; @synthesize=_containerTitle
@property(readonly, assign) BOOL hasReadPrivileges;	// G=0x338641f1; 
@property(readonly, assign) BOOL hasWriteContentPrivileges;	// G=0x33863ffd; 
@property(readonly, assign) BOOL hasWritePropertiesPrivileges;	// G=0x33863e09; 
@property(readonly, assign) BOOL isAddressBook;	// G=0x33862a71; 
@property(readonly, assign) BOOL isPrincipal;	// G=0x33862979; 
@property(readonly, assign) BOOL isSearchAddressBook;	// G=0x33862a01; 
@property(readonly, assign) BOOL isSharedAddressBook;	// G=0x338629b1; 
@property(assign) BOOL isUnauthenticated;	// G=0x33862959; S=0x33862969; @synthesize=_isUnauthenticated
@property(retain) NSURL *owner;	// G=0x338646c9; S=0x338648c9; @synthesize=_owner
@property(retain) NSSet *privileges;	// G=0x33864609; S=0x33864769; @synthesize=_privileges
@property(readonly, assign) NSSet *privilegesAsStringSet;	// G=0x338643c1; 
@property(retain) NSString *pushKey;	// G=0x33864621; S=0x33864795; @synthesize=_pushKey
@property(retain) NSDictionary *pushTransports;	// G=0x33864639; S=0x338647c1; @synthesize=_pushTransports
@property(retain) NSString *quotaAvailable;	// G=0x33864669; S=0x33864819; @synthesize=_quotaAvailable
@property(retain) NSString *quotaUsed;	// G=0x33864681; S=0x33864845; @synthesize=_quotaUsed
@property(retain) NSURL *resourceID;	// G=0x33864651; S=0x338647ed; @synthesize=_resourceID
@property(retain) CoreDAVResourceTypeItem *resourceType;	// G=0x338646b1; S=0x3386489d; @synthesize=_resourceType
@property(readonly, assign) NSSet *resourceTypeAsStringSet;	// G=0x33862aa9; 
@property(retain) NSSet *supportedReports;	// G=0x33864699; S=0x33864871; @synthesize=_supportedReports
@property(readonly, assign) NSSet *supportedReportsAsStringSet;	// G=0x33863bdd; 
@property(readonly, assign) BOOL supportsPrincipalPropertySearchReport;	// G=0x33863a21; 
@property(readonly, assign) BOOL supportsSyncCollectionReport;	// G=0x33863865; 
@property(retain) NSURL *url;	// G=0x338645d9; S=0x33864711; @synthesize=_url
+ (id)convertPushTransportsForNSServerNotificationCenter:(id)nsserverNotificationCenter;	// 0x338633f1
+ (id)copyPropertyMappingsForParser;	// 0x33862e21
- (id)initWithURL:(id)url andProperties:(id)properties;	// 0x33862dcd
// declared property getter: - (id)addMemberURL;	// 0x338646e1
- (void)applyParsedProperties:(id)properties;	// 0x33862acd
// declared property getter: - (id)bulkRequests;	// 0x338646f9
// declared property getter: - (id)containerTitle;	// 0x338645f1
- (void)dealloc;	// 0x33863075
- (id)description;	// 0x33863195
// declared property getter: - (BOOL)hasReadPrivileges;	// 0x338641f1
// declared property getter: - (BOOL)hasWriteContentPrivileges;	// 0x33863ffd
// declared property getter: - (BOOL)hasWritePropertiesPrivileges;	// 0x33863e09
// declared property getter: - (BOOL)isAddressBook;	// 0x33862a71
// declared property getter: - (BOOL)isPrincipal;	// 0x33862979
// declared property getter: - (BOOL)isSearchAddressBook;	// 0x33862a01
// declared property getter: - (BOOL)isSharedAddressBook;	// 0x338629b1
// declared property getter: - (BOOL)isUnauthenticated;	// 0x33862959
// declared property getter: - (id)owner;	// 0x338646c9
// declared property getter: - (id)privileges;	// 0x33864609
// declared property getter: - (id)privilegesAsStringSet;	// 0x338643c1
// declared property getter: - (id)pushKey;	// 0x33864621
// declared property getter: - (id)pushTransports;	// 0x33864639
// declared property getter: - (id)quotaAvailable;	// 0x33864669
// declared property getter: - (id)quotaUsed;	// 0x33864681
// declared property getter: - (id)resourceID;	// 0x33864651
// declared property getter: - (id)resourceType;	// 0x338646b1
// declared property getter: - (id)resourceTypeAsStringSet;	// 0x33862aa9
// declared property setter: - (void)setAddMemberURL:(id)url;	// 0x338648f5
// declared property setter: - (void)setBulkRequests:(id)requests;	// 0x33864921
// declared property setter: - (void)setContainerTitle:(id)title;	// 0x3386473d
// declared property setter: - (void)setIsUnauthenticated:(BOOL)unauthenticated;	// 0x33862969
// declared property setter: - (void)setOwner:(id)owner;	// 0x338648c9
// declared property setter: - (void)setPrivileges:(id)privileges;	// 0x33864769
// declared property setter: - (void)setPushKey:(id)key;	// 0x33864795
// declared property setter: - (void)setPushTransports:(id)transports;	// 0x338647c1
// declared property setter: - (void)setQuotaAvailable:(id)available;	// 0x33864819
// declared property setter: - (void)setQuotaUsed:(id)used;	// 0x33864845
// declared property setter: - (void)setResourceID:(id)anId;	// 0x338647ed
// declared property setter: - (void)setResourceType:(id)type;	// 0x3386489d
// declared property setter: - (void)setSupportedReports:(id)reports;	// 0x33864871
// declared property setter: - (void)setUrl:(id)url;	// 0x33864711
// declared property getter: - (id)supportedReports;	// 0x33864699
// declared property getter: - (id)supportedReportsAsStringSet;	// 0x33863bdd
// declared property getter: - (BOOL)supportsPrincipalPropertySearchReport;	// 0x33863a21
// declared property getter: - (BOOL)supportsSyncCollectionReport;	// 0x33863865
// declared property getter: - (id)url;	// 0x338645d9
@end
