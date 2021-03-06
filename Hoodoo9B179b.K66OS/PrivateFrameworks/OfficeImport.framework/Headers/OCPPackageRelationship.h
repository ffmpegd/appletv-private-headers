/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSURL, NSString;

__attribute__((visibility("hidden")))
@interface OCPPackageRelationship : NSObject {
@private
	NSString *mIdentifier;	// 4 = 0x4
	NSString *mType;	// 8 = 0x8
	int mTargetMode;	// 12 = 0xc
	NSURL *mTargetLocation;	// 16 = 0x10
}
- (id)initWithXmlElement:(xmlNode *)xmlElement baseLocation:(id)location;	// 0x328b9179
- (void)dealloc;	// 0x328d47f5
- (id)identifier;	// 0x328b9581
- (void)readFromElement:(xmlNode *)element baseLocation:(id)location;	// 0x328b9281
- (id)targetLocation;	// 0x328bb361
- (int)targetMode;	// 0x329042a5
- (id)type;	// 0x328b9591
@end

