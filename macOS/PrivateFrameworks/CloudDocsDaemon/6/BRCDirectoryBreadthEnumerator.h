//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BRCRelativePath;

__attribute__((visibility("hidden")))
@interface BRCDirectoryBreadthEnumerator : NSObject
{
    struct {
        int _field1;
        long long _field2;
        long long _field3;
        char *_field4;
        int _field5;
        long long _field6;
        long long _field7;
        int _field8;
        struct _opaque_pthread_mutex_t _field9;
        struct _telldir *_field10;
    } *_dir;
    BRCRelativePath *_parentPath;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)nextObjectWithIsDir:(char *)arg1 error:(int *)arg2;
- (id)initWithParentPath:(id)arg1 error:(int *)arg2;

@end

