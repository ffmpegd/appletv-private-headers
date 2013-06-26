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
	NSString *_identifier;	// 4 = 0x4
	NSString *_displayName;	// 8 = 0x8
	NSString *_dataclass;	// 12 = 0xc
	NSString *_assetType;	// 16 = 0x10
	NSData *_icon;	// 20 = 0x14
	NSError *_error;	// 24 = 0x18
}
@property(copy, nonatomic) NSString *assetType;	// G=0x347b6d5d; S=0x347b6d71; @synthesize=_assetType
@property(copy, nonatomic) NSString *dataclass;	// G=0x347b6d39; S=0x347b6d4d; @synthesize=_dataclass
@property(copy, nonatomic) NSString *displayName;	// G=0x347b6d15; S=0x347b6d29; @synthesize=_displayName
@property(copy, nonatomic) NSError *error;	// G=0x347b6da5; S=0x347b6db9; @synthesize=_error
@property(copy, nonatomic) NSData *icon;	// G=0x347b6d81; S=0x347b6d95; @synthesize=_icon
@property(copy, nonatomic) NSString *identifier;	// G=0x347b6cf1; S=0x347b6d05; @synthesize=_identifier
- (id)initWithCoder:(id)coder;	// 0x347b6861
- (id)initWithIdentifier:(id)identifier dataclass:(id)dataclass assetType:(id)type displayName:(id)name error:(id)error;	// 0x347b678d
// declared property getter: - (id)assetType;	// 0x347b6d5d
- (id)copyWithZone:(NSZone *)zone;	// 0x347b6a75
// declared property getter: - (id)dataclass;	// 0x347b6d39
- (void)dealloc;	// 0x347b6b6d
- (id)description;	// 0x347b6c21
// declared property getter: - (id)displayName;	// 0x347b6d15
- (void)encodeWithCoder:(id)coder;	// 0x347b699d
// declared property getter: - (id)error;	// 0x347b6da5
// declared property getter: - (id)icon;	// 0x347b6d81
// declared property getter: - (id)identifier;	// 0x347b6cf1
// declared property setter: - (void)setAssetType:(id)type;	// 0x347b6d71
// declared property setter: - (void)setDataclass:(id)dataclass;	// 0x347b6d4d
// declared property setter: - (void)setDisplayName:(id)name;	// 0x347b6d29
// declared property setter: - (void)setError:(id)error;	// 0x347b6db9
// declared property setter: - (void)setIcon:(id)icon;	// 0x347b6d95
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x347b6d05
@end
