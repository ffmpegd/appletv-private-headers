/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "iTunesStore-Structs.h"

@class NSURL, NSString;

@interface ISOpenURLRequest : NSObject <NSCopying> {
	BOOL _isITunesStoreURL;	// 4 = 0x4
	NSString *_targetIdentifier;	// 8 = 0x8
	NSString *_urlBagKey;	// 12 = 0xc
	NSURL *_url;	// 16 = 0x10
}
@property(assign, nonatomic, getter=isITunesStoreURL) BOOL ITunesStoreURL;	// G=0x36947be1; S=0x36947bf1; @synthesize=_isITunesStoreURL
@property(retain, nonatomic) NSURL *URL;	// G=0x36947c25; S=0x36947c35; @synthesize=_url
@property(copy, nonatomic) NSString *URLBagKey;	// G=0x36947c45; S=0x36947c59; @synthesize=_urlBagKey
@property(copy, nonatomic) NSString *targetIdentifier;	// G=0x36947c01; S=0x36947c15; @synthesize=_targetIdentifier
+ (id)openURLRequestWithURL:(id)url;	// 0x36947b2d
- (id)init;	// 0x36947921
- (id)initWithURL:(id)url;	// 0x36947935
- (id)initWithURLBagKey:(id)urlbagKey;	// 0x36947999
// declared property getter: - (id)URL;	// 0x36947c25
// declared property getter: - (id)URLBagKey;	// 0x36947c45
- (id)copyWithZone:(NSZone *)zone;	// 0x36947a75
- (void)dealloc;	// 0x369479fd
- (id)description;	// 0x36947b69
// declared property getter: - (BOOL)isITunesStoreURL;	// 0x36947be1
// declared property setter: - (void)setITunesStoreURL:(BOOL)url;	// 0x36947bf1
// declared property setter: - (void)setTargetIdentifier:(id)identifier;	// 0x36947c15
// declared property setter: - (void)setURL:(id)url;	// 0x36947c35
// declared property setter: - (void)setURLBagKey:(id)key;	// 0x36947c59
// declared property getter: - (id)targetIdentifier;	// 0x36947c01
@end

