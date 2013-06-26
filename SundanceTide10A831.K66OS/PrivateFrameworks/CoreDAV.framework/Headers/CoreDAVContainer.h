/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <NSObject.h> // Unknown library

@class NSSet, NSURL, CoreDAVResourceTypeItem, NSString, NSDictionary;

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
	NSString *_syncToken;	// 60 = 0x3c
}
@property(retain) NSURL *addMemberURL;	// G=0x333facb5; S=0x333facc9; @synthesize=_addMemberURL
@property(retain) NSDictionary *bulkRequests;	// G=0x333facd9; S=0x333faced; @synthesize=_bulkRequests
@property(retain) NSString *containerTitle;	// G=0x333fab4d; S=0x333fab61; @synthesize=_containerTitle
@property(readonly, assign) BOOL hasReadPrivileges;	// G=0x333f9839; 
@property(readonly, assign) BOOL hasWriteContentPrivileges;	// G=0x333f9a35; 
@property(readonly, assign) BOOL hasWritePropertiesPrivileges;	// G=0x333f9c55; 
@property(readonly, assign) BOOL isPrincipal;	// G=0x333f95ad; 
@property(assign) BOOL isUnauthenticated;	// G=0x333fab1d; S=0x333fab35; @synthesize=_isUnauthenticated
@property(retain) NSURL *owner;	// G=0x333fac91; S=0x333faca5; @synthesize=_owner
@property(retain) NSSet *privileges;	// G=0x333fab71; S=0x333fab85; @synthesize=_privileges
@property(readonly, assign) NSSet *privilegesAsStringSet;	// G=0x333f95f1; 
@property(retain) NSString *pushKey;	// G=0x333fab95; S=0x333faba9; @synthesize=_pushKey
@property(retain) NSDictionary *pushTransports;	// G=0x333fabb9; S=0x333fabcd; @synthesize=_pushTransports
@property(retain) NSString *quotaAvailable;	// G=0x333fac01; S=0x333fac15; @synthesize=_quotaAvailable
@property(retain) NSString *quotaUsed;	// G=0x333fac25; S=0x333fac39; @synthesize=_quotaUsed
@property(retain) NSURL *resourceID;	// G=0x333fabdd; S=0x333fabf1; @synthesize=_resourceID
@property(retain) CoreDAVResourceTypeItem *resourceType;	// G=0x333fac6d; S=0x333fac81; @synthesize=_resourceType
@property(readonly, assign) NSSet *resourceTypeAsStringSet;	// G=0x333f9585; 
@property(retain) NSSet *supportedReports;	// G=0x333fac49; S=0x333fac5d; @synthesize=_supportedReports
@property(readonly, assign) NSSet *supportedReportsAsStringSet;	// G=0x333f9e75; 
@property(readonly, assign) BOOL supportsPrincipalPropertySearchReport;	// G=0x333fa0d1; 
@property(readonly, assign) BOOL supportsSyncCollectionReport;	// G=0x333fa2ad; 
@property(retain) NSString *syncToken;	// G=0x333facfd; S=0x333fad11; @synthesize=_syncToken
@property(retain) NSURL *url;	// G=0x333faaf9; S=0x333fab0d; @synthesize=_url
+ (id)convertPushTransportsForNSServerNotificationCenter:(id)nsserverNotificationCenter;	// 0x333fa5dd
+ (id)copyPropertyMappingsForParser;	// 0x333f8c6d
- (id)initWithURL:(id)url andProperties:(id)properties;	// 0x333f8f05
// declared property getter: - (id)addMemberURL;	// 0x333facb5
- (void)applyParsedProperties:(id)properties;	// 0x333f9201
// declared property getter: - (id)bulkRequests;	// 0x333facd9
// declared property getter: - (id)containerTitle;	// 0x333fab4d
- (void)dealloc;	// 0x333fa489
- (id)description;	// 0x333f8f59
// declared property getter: - (BOOL)hasReadPrivileges;	// 0x333f9839
// declared property getter: - (BOOL)hasWriteContentPrivileges;	// 0x333f9a35
// declared property getter: - (BOOL)hasWritePropertiesPrivileges;	// 0x333f9c55
// declared property getter: - (BOOL)isPrincipal;	// 0x333f95ad
// declared property getter: - (BOOL)isUnauthenticated;	// 0x333fab1d
// declared property getter: - (id)owner;	// 0x333fac91
// declared property getter: - (id)privileges;	// 0x333fab71
// declared property getter: - (id)privilegesAsStringSet;	// 0x333f95f1
// declared property getter: - (id)pushKey;	// 0x333fab95
// declared property getter: - (id)pushTransports;	// 0x333fabb9
// declared property getter: - (id)quotaAvailable;	// 0x333fac01
// declared property getter: - (id)quotaUsed;	// 0x333fac25
// declared property getter: - (id)resourceID;	// 0x333fabdd
// declared property getter: - (id)resourceType;	// 0x333fac6d
// declared property getter: - (id)resourceTypeAsStringSet;	// 0x333f9585
// declared property setter: - (void)setAddMemberURL:(id)url;	// 0x333facc9
// declared property setter: - (void)setBulkRequests:(id)requests;	// 0x333faced
// declared property setter: - (void)setContainerTitle:(id)title;	// 0x333fab61
// declared property setter: - (void)setIsUnauthenticated:(BOOL)unauthenticated;	// 0x333fab35
// declared property setter: - (void)setOwner:(id)owner;	// 0x333faca5
// declared property setter: - (void)setPrivileges:(id)privileges;	// 0x333fab85
// declared property setter: - (void)setPushKey:(id)key;	// 0x333faba9
// declared property setter: - (void)setPushTransports:(id)transports;	// 0x333fabcd
// declared property setter: - (void)setQuotaAvailable:(id)available;	// 0x333fac15
// declared property setter: - (void)setQuotaUsed:(id)used;	// 0x333fac39
// declared property setter: - (void)setResourceID:(id)anId;	// 0x333fabf1
// declared property setter: - (void)setResourceType:(id)type;	// 0x333fac81
// declared property setter: - (void)setSupportedReports:(id)reports;	// 0x333fac5d
// declared property setter: - (void)setSyncToken:(id)token;	// 0x333fad11
// declared property setter: - (void)setUrl:(id)url;	// 0x333fab0d
// declared property getter: - (id)supportedReports;	// 0x333fac49
// declared property getter: - (id)supportedReportsAsStringSet;	// 0x333f9e75
// declared property getter: - (BOOL)supportsPrincipalPropertySearchReport;	// 0x333fa0d1
// declared property getter: - (BOOL)supportsSyncCollectionReport;	// 0x333fa2ad
// declared property getter: - (id)syncToken;	// 0x333facfd
// declared property getter: - (id)url;	// 0x333faaf9
@end
