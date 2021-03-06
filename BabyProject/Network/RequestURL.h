//
//  RequestURL.h
//  LimiteFree
//
//  Created by 张树青 on 16/1/21.
//  Copyright (c) 2016年 zsq. All rights reserved.
//

//网络数据请求地址的宏

#ifndef LimiteFree_RequestURL_h
#define LimiteFree_RequestURL_h

#define BASE_URL @""
//如果项目中使用的后台是同一个域名 那么 每一个接口的前缀是相同的 可以把相同的前缀放到baseURL中 不同的部分再放在不同的宏中

//发现
//广场
#define FIND_SQUARE_URL @"http://api.xiaobudian.me/childhood//api/discovery?city="
//广场_往期主题
#define FIND_TOPICS @"http://api.xiaobudian.me/childhood/api/activities?page=%ld&size=20"
//广场_最新主题
#define FIND_LATEST_TOPICS @"http://api.xiaobudian.me/childhood/api/feeds/addon/%@?from=%ld&size=18"
//TagFeeds
#define FIND_TAG_FEEDS @"http://api.xiaobudian.me/childhood/api/feeds/tag/%@?from=%ld&size=20"
//相片评论
#define PHOTO_COMMENTS @"http://api.xiaobudian.me/childhood/api/feeds/%@/comments?page=%ld&size=20"

//用户信息
#define USER_INFO @"http://api.xiaobudian.me/childhood/api/others/%@"
//时间轴图片
#define TIME_LINE_PHOTOS  @"http://api.xiaobudian.me/childhood/api/babies/%@/feeds/summary?from=%ld&size=20"
//事件轴图片详情
#define PHOTO_DETAIL @"http://api.xiaobudian.me/childhood/api/babies/%@/feeds/%@?from=%ld&size=200"


////动态_精选
#define FEEDS_FEATURE  @"http://api.xiaobudian.me/childhood/api/featured/categories/%@/feeds?from=%ld&size=20"

#endif
