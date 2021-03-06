/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <NSURL.h> // Unknown library


@interface NSURL (CoreDAVExtensions)
+ (id)CDVDefaultPortForScheme:(id)scheme;	// 0x338766e9
+ (id)CDVURLWithScheme:(id)scheme host:(id)host port:(id)port path:(id)path;	// 0x33876789
+ (id)CDVURLWithScheme:(id)scheme user:(id)user password:(id)password host:(id)host port:(id)port path:(id)path;	// 0x338767e9
- (id)initWithCDVScheme:(id)cdvscheme user:(id)user password:(id)password host:(id)host port:(id)port path:(id)path parameterString:(id)string query:(id)query fragment:(id)fragment;	// 0x33877d15
- (id)CDVFileSystemSafePath;	// 0x338782a5
- (id)CDVInitWithDirtyString:(id)dirtyString;	// 0x33878385
- (BOOL)CDVIsEqualToURL:(id)url;	// 0x33876369
- (id)CDVPassword;	// 0x338764c5
- (id)CDVRawPath;	// 0x33878899
- (id)CDVServerURL;	// 0x338763a9
- (id)CDVURLWithPassword:(id)password;	// 0x338765e9
- (id)CDVURLWithPath:(id)path;	// 0x338764e9
- (id)CDVURLWithUser:(id)user;	// 0x338786a9
- (id)CDVfixedURLByAppendingPathComponent:(id)component;	// 0x33876319
@end

