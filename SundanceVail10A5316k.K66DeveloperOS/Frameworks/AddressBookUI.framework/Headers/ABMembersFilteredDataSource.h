/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "UITableViewDataSource.h"
#import <NSObject.h> // Unknown library
#import "UITableViewDelegate.h"
#import "AddressBookUI-Structs.h"

@class NSMutableArray, NSArray;
@protocol ABMembersDataSourceDelegate, ABStyleProvider;

@interface ABMembersFilteredDataSource : NSObject <UITableViewDelegate, UITableViewDataSource> {
@private
	NSMutableArray *_records;	// 4 = 0x4
	void *_addressBook;	// 8 = 0x8
	id<ABMembersDataSourceDelegate> _delegate;	// 12 = 0xc
	id<ABStyleProvider> _styleProvider;	// 16 = 0x10
}
@property(assign, nonatomic) void *addressBook;	// G=0x34cbbff9; S=0x34c545e1; @synthesize=_addressBook
@property(assign, nonatomic) id<ABMembersDataSourceDelegate> delegate;	// G=0x34c83ef9; S=0x34c54625; @synthesize=_delegate
@property(readonly, assign, nonatomic) NSArray *records;	// G=0x34c835b5; 
@property(retain, nonatomic) id<ABStyleProvider> styleProvider;	// G=0x34c838a1; S=0x34c54615; @synthesize=_styleProvider
- (void)addRecords:(id)records;	// 0x34c83559
// declared property getter: - (void *)addressBook;	// 0x34cbbff9
- (unsigned)count;	// 0x34cbbf75
- (void)dealloc;	// 0x34cbbefd
// declared property getter: - (id)delegate;	// 0x34c83ef9
// declared property getter: - (id)records;	// 0x34c835b5
- (void)removeAllRecords;	// 0x34c83539
- (void)scrollViewWillBeginDragging:(id)scrollView;	// 0x34cbbf95
// declared property setter: - (void)setAddressBook:(void *)book;	// 0x34c545e1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x34c54625
// declared property setter: - (void)setStyleProvider:(id)provider;	// 0x34c54615
// declared property getter: - (id)styleProvider;	// 0x34c838a1
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x34c8365d
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x34c83e65
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x34c83329
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;	// 0x34c838b9
@end

