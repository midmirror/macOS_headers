//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSTableViewDataSource.h"

@interface wxNSTableDataSource : NSObject <NSTableViewDataSource>
{
    struct wxListWidgetCocoaImpl *impl;
}

- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (struct wxListWidgetCocoaImpl *)implementation;
- (void)setImplementation:(struct wxListWidgetCocoaImpl *)arg1;
- (id)init;

@end

