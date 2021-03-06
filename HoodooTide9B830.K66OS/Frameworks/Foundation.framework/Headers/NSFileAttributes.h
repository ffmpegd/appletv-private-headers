/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSDictionary.h> // Unknown library
#import "Foundation-Structs.h"

@class NSMutableDictionary, NSDate;

__attribute__((visibility("hidden")))
@interface NSFileAttributes : NSDictionary {
@private
	NSMutableDictionary *dict;	// 4 = 0x4
	stat statInfo;	// 8 = 0x8
	struct {
		BOOL extensionHidden;
		NSDate *creationDate;
		fields validFields;
	} catInfo;	// 116 = 0x74
	NSDictionary *extendedAttrs;	// 128 = 0x80
	int fileProtectionClass;	// 132 = 0x84
}
+ (id)_attributesAtPath:(id)path partialReturn:(BOOL)aReturn filterResourceFork:(BOOL)fork error:(id *)error;	// 0x315a3aa9
+ (id)_attributesAtURL:(id)url partialReturn:(BOOL)aReturn filterResourceFork:(BOOL)fork error:(id *)error;	// 0x315d5e2d
+ (id)attributesAtPath:(id)path traverseLink:(BOOL)link;	// 0x315b2b09
+ (id)attributesWithStat:(stat *)stat;	// 0x315a3bfd
- (unsigned)count;	// 0x315d667d
- (void)dealloc;	// 0x315a4b35
- (id)fileGroupOwnerAccountName;	// 0x315d6865
- (unsigned)fileGroupOwnerAccountNumber;	// 0x315d68b1
- (id)fileModificationDate;	// 0x315d6771
- (id)fileOwnerAccountName;	// 0x315d6805
- (unsigned)fileOwnerAccountNumber;	// 0x315d6851
- (unsigned)filePosixPermissions;	// 0x315d67ed
- (unsigned long long)fileSize;	// 0x315d675d
- (unsigned)fileSystemFileNumber;	// 0x315d68d5
- (int)fileSystemNumber;	// 0x315d68c5
- (id)fileType;	// 0x315d67d9
- (unsigned)hash;	// 0x315d6075
- (BOOL)isDirectory;	// 0x315d68e9
- (BOOL)isEqual:(id)equal;	// 0x315d6531
- (id)keyEnumerator;	// 0x315d66ed
- (id)objectForKey:(id)key;	// 0x315a3fa5
@end

