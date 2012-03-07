/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

#import "LSResourceProxy.h"

@class NSString, NSArray;

@interface LSApplicationProxy : LSResourceProxy {
@private
	unsigned _flags;	// 40 = 0x28
	NSArray *_privateDocumentIconNames;	// 44 = 0x2c
	LSApplicationProxy *_privateDocumentTypeOwner;	// 48 = 0x30
}
@property(readonly, assign, nonatomic) NSString *applicationIdentifier;	// G=0x33e76aed; 
@property(assign) BOOL privateDocumentIconAllowOverride;	// G=0x33e75cdd; S=0x33e75cf1; converted property
@property(retain) NSArray *privateDocumentIconNames;	// G=0x33e75ccd; S=0x33e76a8d; converted property
@property(retain) LSApplicationProxy *privateDocumentTypeOwner;	// G=0x33e75d15; S=0x33e76a4d; converted property
@property(readonly, assign, nonatomic) NSString *roleIdentifier;	// G=0x33e75cc9; 
+ (id)applicationProxyForIdentifier:(id)identifier;	// 0x33e76885
+ (id)applicationProxyForIdentifier:(id)identifier roleIdentifier:(id)identifier2;	// 0x33e7682d
- (id)_initWithApplicationIdentifier:(id)applicationIdentifier name:(id)name containerURL:(id)url resourcesDirectoryURL:(id)url4 iconsDictionary:(id)dictionary iconFileNames:(id)names iconIsPrerendered:(BOOL)prerendered;	// 0x33e76afd
// declared property getter: - (id)applicationIdentifier;	// 0x33e76aed
- (id)containerURL;	// 0x33e76add
- (void)dealloc;	// 0x33e767cd
- (id)description;	// 0x33e768dd
- (unsigned)hash;	// 0x33e76921
- (id)iconStyleDomain;	// 0x33e75d25
- (BOOL)isEqual:(id)equal;	// 0x33e76949
- (id)localizedName;	// 0x33e769d9
// converted property getter: - (BOOL)privateDocumentIconAllowOverride;	// 0x33e75cdd
// converted property getter: - (id)privateDocumentIconNames;	// 0x33e75ccd
// converted property getter: - (id)privateDocumentTypeOwner;	// 0x33e75d15
- (id)resourcesDirectoryURL;	// 0x33e76acd
// declared property getter: - (id)roleIdentifier;	// 0x33e75cc9
// converted property setter: - (void)setPrivateDocumentIconAllowOverride:(BOOL)override;	// 0x33e75cf1
// converted property setter: - (void)setPrivateDocumentIconNames:(id)names;	// 0x33e76a8d
// converted property setter: - (void)setPrivateDocumentTypeOwner:(id)owner;	// 0x33e76a4d
@end

