/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "NetflixNrdObjectProtocol.h"
#import "NetflixNrdObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface NetflixStorage : NetflixNrdObject <NetflixNrdObjectProtocol> {
}
@property(readonly, assign, nonatomic) NSString *NO_DEVICE_ACCOUNT;	// G=0x36904a59; 
+ (id)sharedInstance;	// 0x36904979
// declared property getter: - (id)NO_DEVICE_ACCOUNT;	// 0x36904a59
- (void)clear:(id)clear;	// 0x36904fc9
- (void)clearAll;	// 0x36905051
- (id)data;	// 0x36904a65
- (id)getData:(id)data;	// 0x36904b91
- (id)getItem:(id)item key:(id)key;	// 0x36904e65
- (unsigned)length:(id)length;	// 0x36904d99
- (void)removeItem:(id)item key:(id)key;	// 0x36904f3d
- (void)setItem:(id)item key:(id)key value:(id)value;	// 0x36904eb1
- (void)updateProperty:(id)property value:(id)value;	// 0x369050cd
@end

