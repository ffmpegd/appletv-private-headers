/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "CoreMediaStream-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, NSArray, NSString;
@protocol NSCoding;

@interface MSASAssetCollection : NSObject <NSCopying> {
	NSString *_GUID;	// 4 = 0x4
	NSString *_ctag;	// 8 = 0x8
	NSString *_albumGUID;	// 12 = 0xc
	NSArray *_assets;	// 16 = 0x10
	NSString *_fileName;	// 20 = 0x14
	NSString *_path;	// 24 = 0x18
	id<NSCoding> _userInfo;	// 28 = 0x1c
	NSDictionary *_metadata;	// 32 = 0x20
	long long _photoNumber;	// 36 = 0x24
	BOOL _hasComments;	// 44 = 0x2c
}
@property(retain, nonatomic) NSString *GUID;	// G=0x33760495; S=0x337604a5; @synthesize=_GUID
@property(retain, nonatomic) NSString *albumGUID;	// G=0x33760505; S=0x33760515; @synthesize=_albumGUID
@property(retain, nonatomic) NSArray *assets;	// G=0x3376053d; S=0x3375fa51; @synthesize=_assets
@property(retain, nonatomic) NSString *ctag;	// G=0x337604cd; S=0x337604dd; @synthesize=_ctag
@property(retain, nonatomic) NSString *fileName;	// G=0x3376054d; S=0x3376055d; @synthesize=_fileName
@property(assign, nonatomic) BOOL hasComments;	// G=0x33760645; S=0x33760655; @synthesize=_hasComments
@property(retain, nonatomic) NSDictionary *metadata;	// G=0x337605e1; S=0x337605f1; @synthesize=_metadata
@property(retain, nonatomic) NSString *path;	// G=0x33760585; S=0x33760595; @synthesize=_path
@property(assign, nonatomic) long long photoNumber;	// G=0x33760619; S=0x33760631; @synthesize=_photoNumber
@property(retain, nonatomic) id<NSCoding> userInfo;	// G=0x337605bd; S=0x337605cd; @synthesize=_userInfo
+ (id)MSASPAssetCollectionFromProtocolDictionary:(id)protocolDictionary;	// 0x337a0821
+ (id)assetCollectionWithAssetCollection:(id)assetCollection;	// 0x3375f651
+ (BOOL)supportsSecureCoding;	// 0x3375f999
- (id)initWithCoder:(id)coder;	// 0x33760045
- (id)initWithFileName:(id)fileName path:(id)path;	// 0x3375f99d
- (void).cxx_destruct;	// 0x33760665
// declared property getter: - (id)GUID;	// 0x33760495
- (id)MSASPProtocolDictionary;	// 0x337a04d9
// declared property getter: - (id)albumGUID;	// 0x33760505
// declared property getter: - (id)assets;	// 0x3376053d
- (id)copyWithZone:(NSZone *)zone;	// 0x33760469
// declared property getter: - (id)ctag;	// 0x337604cd
- (id)description;	// 0x3375fab9
- (void)encodeWithCoder:(id)coder;	// 0x3375fd3d
// declared property getter: - (id)fileName;	// 0x3376054d
// declared property getter: - (BOOL)hasComments;	// 0x33760645
- (unsigned)hash;	// 0x33760385
- (BOOL)isEqual:(id)equal;	// 0x337602b5
// declared property getter: - (id)metadata;	// 0x337605e1
// declared property getter: - (id)path;	// 0x33760585
// declared property getter: - (long long)photoNumber;	// 0x33760619
// declared property setter: - (void)setAlbumGUID:(id)guid;	// 0x33760515
// declared property setter: - (void)setAssets:(id)assets;	// 0x3375fa51
// declared property setter: - (void)setCtag:(id)ctag;	// 0x337604dd
// declared property setter: - (void)setFileName:(id)name;	// 0x3376055d
// declared property setter: - (void)setGUID:(id)guid;	// 0x337604a5
// declared property setter: - (void)setHasComments:(BOOL)comments;	// 0x33760655
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x337605f1
- (void)setMetadataValue:(id)value forKey:(id)key;	// 0x337603a5
// declared property setter: - (void)setPath:(id)path;	// 0x33760595
// declared property setter: - (void)setPhotoNumber:(long long)number;	// 0x33760631
// declared property setter: - (void)setUserInfo:(id)info;	// 0x337605cd
// declared property getter: - (id)userInfo;	// 0x337605bd
@end
