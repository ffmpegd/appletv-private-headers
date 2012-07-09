/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import "NSCopying.h"
#import "NSCoding.h"
#import "MobileBackup-Structs.h"
#import <NSObject.h> // Unknown library

@class NSData, NSString, NSError;

@interface MBRestoreFailure : NSObject <NSCopying, NSCoding> {
@private
	NSString *_identifier;	// 4 = 0x4
	NSString *_displayName;	// 8 = 0x8
	NSString *_dataclass;	// 12 = 0xc
	NSString *_assetType;	// 16 = 0x10
	NSData *_icon;	// 20 = 0x14
	NSError *_error;	// 24 = 0x18
}
@property(copy, nonatomic) NSString *assetType;	// G=0x315ae83d; S=0x315ae851; @synthesize=_assetType
@property(copy, nonatomic) NSString *dataclass;	// G=0x315ae819; S=0x315ae82d; @synthesize=_dataclass
@property(copy, nonatomic) NSString *displayName;	// G=0x315ae7f5; S=0x315ae809; @synthesize=_displayName
@property(copy, nonatomic) NSError *error;	// G=0x315ae885; S=0x315ae899; @synthesize=_error
@property(copy, nonatomic) NSData *icon;	// G=0x315ae861; S=0x315ae875; @synthesize=_icon
@property(copy, nonatomic) NSString *identifier;	// G=0x315ae7d1; S=0x315ae7e5; @synthesize=_identifier
- (id)initWithCoder:(id)coder;	// 0x315ae341
- (id)initWithIdentifier:(id)identifier dataclass:(id)dataclass assetType:(id)type displayName:(id)name error:(id)error;	// 0x315ae26d
// declared property getter: - (id)assetType;	// 0x315ae83d
- (id)copyWithZone:(NSZone *)zone;	// 0x315ae555
// declared property getter: - (id)dataclass;	// 0x315ae819
- (void)dealloc;	// 0x315ae64d
- (id)description;	// 0x315ae701
// declared property getter: - (id)displayName;	// 0x315ae7f5
- (void)encodeWithCoder:(id)coder;	// 0x315ae47d
// declared property getter: - (id)error;	// 0x315ae885
// declared property getter: - (id)icon;	// 0x315ae861
// declared property getter: - (id)identifier;	// 0x315ae7d1
// declared property setter: - (void)setAssetType:(id)type;	// 0x315ae851
// declared property setter: - (void)setDataclass:(id)dataclass;	// 0x315ae82d
// declared property setter: - (void)setDisplayName:(id)name;	// 0x315ae809
// declared property setter: - (void)setError:(id)error;	// 0x315ae899
// declared property setter: - (void)setIcon:(id)icon;	// 0x315ae875
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x315ae7e5
@end
