/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSXPCCoding.h"
#import <NSObject.h> // Unknown library

@class NSString, NSDate, NSNumber, SSItemImageCollection;

@interface SSPreorder : NSObject <SSXPCCoding> {
@private
	NSNumber *_accountID;	// 4 = 0x4
	NSString *_artistName;	// 8 = 0x8
	SSItemImageCollection *_imageCollection;	// 12 = 0xc
	unsigned long long _itemID;	// 16 = 0x10
	NSString *_itemKind;	// 24 = 0x18
	double _releaseDate;	// 28 = 0x1c
	NSString *_releaseDateString;	// 36 = 0x24
	long long _pid;	// 40 = 0x28
	unsigned long long _preorderID;	// 48 = 0x30
	NSString *_title;	// 56 = 0x38
}
@property(readonly, assign, nonatomic) NSString *artistName;	// G=0x3421809d; @synthesize=_artistName
@property(readonly, assign, nonatomic) SSItemImageCollection *imageCollection;	// G=0x342180ad; @synthesize=_imageCollection
@property(readonly, assign, nonatomic) NSString *itemKind;	// G=0x342180bd; @synthesize=_itemKind
@property(readonly, assign, nonatomic) long long persistentIdentifier;	// G=0x342180cd; @synthesize=_pid
@property(readonly, assign, nonatomic) NSDate *releaseDate;	// G=0x34217a55; 
@property(readonly, assign, nonatomic) NSString *releaseDateString;	// G=0x342180e5; @synthesize=_releaseDateString
@property(readonly, assign, nonatomic) NSNumber *storeAccountIdentifier;	// G=0x342180f5; @synthesize=_accountID
@property(readonly, assign, nonatomic) unsigned long long storeItemIdentifier;	// G=0x34218105; @synthesize=_itemID
@property(readonly, assign, nonatomic) unsigned long long storePreorderIdentifier;	// G=0x3421811d; @synthesize=_preorderID
@property(readonly, assign, nonatomic) NSString *title;	// G=0x34218135; @synthesize=_title
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x34217d69
- (id)_initWithPersistentIdentifier:(long long)persistentIdentifier;	// 0x342178e5
- (void)_setArtistName:(id)name;	// 0x34217a89
- (void)_setImageCollection:(id)collection;	// 0x34217acd
- (void)_setItemKind:(id)kind;	// 0x34217b11
- (void)_setReleaseDate:(id)date;	// 0x34217b55
- (void)_setReleaseDateString:(id)string;	// 0x34217b81
- (void)_setStoreAccountIdentifier:(id)identifier;	// 0x34217bc5
- (void)_setStoreItemIdentifier:(long long)identifier;	// 0x34217c09
- (void)_setStorePreorderIdentifier:(long long)identifier;	// 0x34217c1d
- (void)_setTitle:(id)title;	// 0x34217c31
// declared property getter: - (id)artistName;	// 0x3421809d
- (id)copyReleaseDateStringWithStyle:(long)style;	// 0x342179d9
- (void *)copyXPCEncoding;	// 0x34217f29
- (void)dealloc;	// 0x34217929
- (id)description;	// 0x34217c75
- (unsigned)hash;	// 0x34217cf5
// declared property getter: - (id)imageCollection;	// 0x342180ad
- (BOOL)isEqual:(id)equal;	// 0x34217d05
// declared property getter: - (id)itemKind;	// 0x342180bd
// declared property getter: - (long long)persistentIdentifier;	// 0x342180cd
// declared property getter: - (id)releaseDate;	// 0x34217a55
// declared property getter: - (id)releaseDateString;	// 0x342180e5
// declared property getter: - (id)storeAccountIdentifier;	// 0x342180f5
// declared property getter: - (unsigned long long)storeItemIdentifier;	// 0x34218105
// declared property getter: - (unsigned long long)storePreorderIdentifier;	// 0x3421811d
// declared property getter: - (id)title;	// 0x34218135
@end

