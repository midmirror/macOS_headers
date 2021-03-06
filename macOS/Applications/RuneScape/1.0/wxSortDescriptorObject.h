//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSSortDescriptor.h"

#import "NSCopying.h"

@interface wxSortDescriptorObject : NSSortDescriptor <NSCopying>
{
    struct wxDataViewColumn *columnPtr;
    struct wxDataViewModel *modelPtr;
}

- (void)setModelPtr:(struct wxDataViewModel *)arg1;
- (void)setColumnPtr:(struct wxDataViewColumn *)arg1;
- (struct wxDataViewModel *)modelPtr;
- (struct wxDataViewColumn *)columnPtr;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithModelPtr:(struct wxDataViewModel *)arg1 sortingColumnPtr:(struct wxDataViewColumn *)arg2 ascending:(BOOL)arg3;
- (id)init;

@end

