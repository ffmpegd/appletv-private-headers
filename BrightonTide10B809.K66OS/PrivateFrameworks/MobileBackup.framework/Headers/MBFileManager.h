/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <NSObject.h> // Unknown library


@interface MBFileManager : NSObject {
}
+ (id)defaultManager;	// 0x345d5609
- (BOOL)copyPath:(id)path toPath:(id)path2;	// 0x345d56c1
- (BOOL)createDirectoryAtPath:(id)path attributes:(id)attributes;	// 0x345d57c1
- (id)directoryContentsAtPath:(id)path;	// 0x345d5749
- (id)fileAttributesAtPath:(id)path traverseLink:(BOOL)link;	// 0x345d5785
- (BOOL)fileExistsAtPath:(id)path;	// 0x345d5651
- (BOOL)movePath:(id)path toPath:(id)path2;	// 0x345d5705
- (BOOL)removeFileAtPath:(id)path;	// 0x345d5689
@end

