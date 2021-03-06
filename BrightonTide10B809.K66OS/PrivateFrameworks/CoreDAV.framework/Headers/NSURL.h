/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <NSURL.h> // Unknown library


@interface NSURL (CoreDAVExtensions)
+ (id)CDVDefaultPortForScheme:(id)scheme;	// 0x3370e661
+ (id)CDVURLWithScheme:(id)scheme host:(id)host port:(id)port path:(id)path;	// 0x3370e0e9
+ (id)CDVURLWithScheme:(id)scheme user:(id)user password:(id)password host:(id)host port:(id)port path:(id)path;	// 0x3370e071
- (id)initWithCDVScheme:(id)cdvscheme user:(id)user password:(id)password host:(id)host port:(id)port path:(id)path parameterString:(id)string query:(id)query fragment:(id)fragment;	// 0x3370e2f1
- (id)CDVFileSystemSafePath;	// 0x3370ecf1
- (BOOL)CDVIsEqualToURL:(id)url;	// 0x3370ecb9
- (id)CDVPassword;	// 0x3370ea51
- (id)CDVRawLastPathComponent;	// 0x3370eaa9
- (id)CDVRawPath;	// 0x3370ea7d
- (id)CDVServerURL;	// 0x3370ebc5
- (id)CDVURLByDeletingLastPathComponent;	// 0x3370eb41
- (id)CDVURLWithPassword:(id)password;	// 0x3370e835
- (id)CDVURLWithPath:(id)path;	// 0x3370e941
- (id)CDVURLWithScheme:(id)scheme userandpass:(id)userandpass host:(id)host port:(id)port path:(id)path parameters:(id)parameters encodePercents:(BOOL)percents;	// 0x3370e151
- (id)CDVURLWithUser:(id)user;	// 0x3370e729
- (id)CDVfixedURLByAppendingPathComponent:(id)component;	// 0x3370edd1
@end

