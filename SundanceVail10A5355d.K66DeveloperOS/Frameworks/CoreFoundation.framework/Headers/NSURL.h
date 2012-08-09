/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface NSURL : NSObject <NSSecureCoding, NSCopying> {
	NSString *_urlString;	// 4 = 0x4
	NSURL *_baseURL;	// 8 = 0x8
	void *_clients;	// 12 = 0xc
	void *_reserved;	// 16 = 0x10
}
+ (id)URLByResolvingBookmarkData:(id)data options:(unsigned)options relativeToURL:(id)url bookmarkDataIsStale:(BOOL *)stale error:(id *)error;	// 0x35d7ea7d
+ (id)bookmarkDataWithContentsOfURL:(id)url error:(id *)error;	// 0x35d7eb59
+ (id)resourceValuesForKeys:(id)keys fromBookmarkData:(id)bookmarkData;	// 0x35d7eae9
+ (BOOL)supportsSecureCoding;	// 0x35d7e57d
+ (BOOL)writeBookmarkData:(id)data toURL:(id)url options:(unsigned)options error:(id *)error;	// 0x35d7eb21
- (id)initByResolvingBookmarkData:(id)data options:(unsigned)options relativeToURL:(id)url bookmarkDataIsStale:(BOOL *)stale error:(id *)error;	// 0x35d7e88d
- (id)bookmarkDataWithAliasRecord:(id)aliasRecord;	// 0x35d7eba1
- (id)bookmarkDataWithOptions:(unsigned)options includingResourceValuesForKeys:(id)keys relativeToURL:(id)url error:(id *)error;	// 0x35d7e809
- (BOOL)checkResourceIsReachableAndReturnError:(id *)error;	// 0x35d7e69d
- (id)filePathURL;	// 0x35d7e771
- (id)fileReferenceURL;	// 0x35d7e6f1
- (BOOL)getResourceValue:(out id *)value forKey:(id)key error:(out id *)error;	// 0x35d014d5
- (BOOL)isFileReferenceURL;	// 0x35cfdddd
- (id)resourceValuesForKeys:(id)keys error:(id *)error;	// 0x35d7e581
- (BOOL)setResourceValue:(id)value forKey:(id)key error:(id *)error;	// 0x35d7e5d9
- (BOOL)setResourceValues:(id)values error:(id *)error;	// 0x35d7e645
@end
