/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAAction.h> // Unknown library


@interface ASEmailChangeFlagsAction : DAAction {
	BOOL _read;	// 20 = 0x14
	BOOL _flagged;	// 21 = 0x15
	unsigned long long _changedFlags;	// 24 = 0x18
}
- (id)initWithServerID:(id)serverID read:(BOOL)read flagged:(BOOL)flagged changedFlags:(unsigned long long)flags;	// 0x339fcd6d
- (void)appendApplicationDataForTask:(id)task toWBXMLData:(id)wbxmldata;	// 0x339fcde1
@end
